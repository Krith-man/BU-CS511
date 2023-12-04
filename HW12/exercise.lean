import Mathlib.Data.Real.Basic
import Mathlib.Tactic.IntervalCases
import Library.Theory.Comparison
import Library.Theory.Parity
import Library.Theory.ParityModular
import Library.Theory.Prime
import Library.Theory.InjectiveSurjective
import Mathlib.Tactic.Set
import Library.Tactic.ExistsDelaborator
import Library.Tactic.FiniteInductive
import Library.Tactic.Induction
import Library.Tactic.Rel
import Library.Tactic.ModCases
import Mathlib.Tactic.GCongr
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel
import Library.Tactic.Use
import Library.Tactic.Product

set_option push_neg.use_distrib true
open Function

/- 3 points -/
theorem problem4a {f : X → Y} (hf : Surjective f) {g : Y → Z} (hg : Surjective g) :
    Surjective (g ∘ f) := by
  dsimp [Surjective]
  intro b
  obtain ⟨x, hx⟩ :=  hg b
  obtain ⟨a, ha⟩ := hf x
  use a
  have h_goal: g (f a) = b := by
  {
    rw[ha]
    apply hx
  }
  apply h_goal

/- 2 points -/
theorem problem4b {f : X → Y} (hf : Surjective f) : ∃ g : Y → X, f ∘ g = id := by
  dsimp [Surjective]
  -- follow 8.3.7 Example
  choose g hg using hf
  use g
  ext b
  apply hg


/- 2 points -/
theorem problem4c {f : X → Y} {g : Y → X} (h : Inverse f g) : Inverse g f := by
  dsimp[Inverse]
  constructor
  . choose g f using h
    apply f
  . choose g f using h
    apply g

-- Copy from Macbeth's book
theorem bijective_of_inverse {f : X → Y} {g : Y → X} (h : Inverse f g) :
    Bijective f := by
  dsimp [Inverse] at h
  obtain ⟨hgf, hfg⟩ := h
  constructor
  · -- `f` is injective
    intro x1 x2 hx
    calc x1 = id x1 := by rfl
      _ = (g ∘ f) x1 := by rw [hgf]
      _ = g (f x1) := by rfl
      _ = g (f x2) := by rw [hx]
      _ = (g ∘ f) x2 := by rfl
      _ = id x2 := by rw [hgf]
      _ = x2 := by rfl
  · -- `f` is surjective
    intro y
    use g y
    calc f (g y) = (f ∘ g) y := by rfl
      _ = id y := by rw [hfg]
      _ = y := by rfl

/- 3 points -/
theorem problem4d {f : X → Y} {g1 g2 : Y → X} (h1 : Inverse f g1) (h2 : Inverse f g2) :
    g1 = g2 := by
  have h_bijective := bijective_of_inverse h1
  ext x
  obtain ⟨y, hy⟩ := h_bijective.right x  -- h_bijective.right = `f` is surjective
  rw[← hy] -- x = f y (reverse equality)
  have h_goal: g1 (f y) = g2 (f y) := by
  {
    have g1_f: g1 ∘ f = id  := h1.left
    have g2_g: g2 ∘ f = id  := h2.left
    calc
      g1 (f y) = (g1 ∘ f) y := by rfl
      _ = id y := by rw[g1_f]
      _ = (g2 ∘ f) y := by rw[g2_g]
      _ = g2 (f y) := by rfl
  }
  apply h_goal

/- 1 points -/
theorem problem5a1 : ¬ Injective (fun ((x, y) : ℤ × ℤ) ↦ x - 2 * y - 1) := by
  dsimp[Injective]
  push_neg
  use (1, 0), (5, 2)
  constructor
  · ring
  · ring

/- 1 points -/
theorem problem5a2 : Surjective (fun ((x, y) : ℤ × ℤ) ↦ x - 2 * y - 1) := by
  dsimp[Injective]
  intro z
  use (z + 3, 1)
  ring

/- 2 points -/
theorem problem5b : ¬ Surjective (fun ((x, y) : ℚ × ℚ) ↦ x ^ 2 + y ^ 2) := by
  dsimp[Surjective]
  push_neg
  use -1
  intro x
  have h_goal: x.fst ^ 2 + x.snd ^ 2 > -1 := by
  {
    calc
      x.fst ^ 2 + x.snd ^ 2 = x.fst ^ 2 + x.snd ^ 2 := by ring
      _ ≥ 0 := by extra
      _ > -1 := by numbers
  }
  apply ne_of_gt h_goal


/- 3 points -/
theorem problem5c : ¬ Injective
    (fun ((x, y, z) : ℝ × ℝ × ℝ) ↦ (x + y + z, x + 2 * y + 3 * z)) := by
  dsimp[Injective]
  push_neg
  use (4, -2, 0), (2, 2, -2)
  numbers
  constructor
  . ring
  . numbers

/- 3 points -/
theorem problem5d : Injective (fun ((x, y) : ℝ × ℝ) ↦ (x + y, x + 2 * y, x + 3 * y)) := by
  dsimp[Injective]
  intro x1 x2
  intro h
  obtain ⟨h1, h2, h3⟩ := h
  have h4 : x1.fst + 2 * x1.snd = x1.fst + x1.snd + x2.snd := by
  {
    calc
      x1.fst + 2 * x1.snd =  x2.fst + 2 * x2.snd := by rw[h2]
      _ = x2.fst + x2.snd + x2.snd := by ring
      _ = x1.fst + x1.snd + x2.snd := by rw[h1]
  }
  have h5 : x1.snd = x2.snd := by
  {
    calc
      x1.snd = x1.fst + 2 * x1.snd - x1.snd - x1.fst:= by ring
      _ = x1.fst + x1.snd + x2.snd - x1.snd - x1.fst:= by rw[h4]
      _ = x2.snd := by ring
  }
  have h6 : x1.fst = x2.fst := by
  {
    calc
      x1.fst = x1.fst + x1.snd - x1.snd:= by ring
      _ = x2.fst + x2.snd - x1.snd := by rw[h1]
      _ = x2.fst + x2.snd - x2.snd:= by rw[h5]
      _ = x2.fst := by ring
  }
  have h_goal: x1 = x2 := by
  {
    calc
      x1 = (x1.fst, x1.snd) := by ring
      _ = (x2.fst,x2.snd) := by rw[h5,h6]
      _ = x2 := by ring
  }
  apply h_goal
