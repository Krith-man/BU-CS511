import Mathlib.Data.Real.Basic
import Mathlib.Tactic.IntervalCases
import Library.Theory.Comparison
import Library.Theory.Parity
import Library.Theory.ParityModular
import Library.Theory.Prime
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

set_option push_neg.use_distrib true
open Function

/- 2 points -/
theorem problem4a : ¬ ∀ (f : ℤ → ℤ), Surjective f → Surjective (fun x ↦ 2 * f x) := by
    dsimp [Surjective]
    push_neg
    use fun x ↦ x
    constructor
    . intro y
      use y
      ring
    . use 1
      intro x
      dsimp at *
      have hx := le_or_succ_le x 0
      obtain h1 | h2 := hx
      · apply ne_of_lt
        calc
          2 * x ≤ 2 * 0 := by rel[h1]
          _ < 1 := by extra
      · apply ne_of_gt
        calc
          2 * x ≥ 2 * 1 := by rel[h2]
          _ = 1 + 1 := by ring
          _ > 1 := by extra

/- 2 points -/
theorem problem4b : ¬ ∀ c : ℝ, Surjective (fun x ↦ c * x) := by
  dsimp [Surjective]
  push_neg
  use 0, 5
  intro x
  have h_goal: 0 * x ≠ 5 := by
  {
    ring
    numbers
  }
  apply h_goal

/- 3 points -/
theorem problem4c {f : ℚ → ℚ} (hf : ∀ x y, x < y → f x < f y) : Injective f := by
  dsimp [Injective]
  intro x1 x2 h
  obtain hl | heq | hgr := lt_trichotomy x1 x2
  . have h_contradiction := ne_of_lt (hf x1 x2 hl)
    contradiction
  . apply heq
  . have h_contradiction := ne_of_gt (hf x2 x1 hgr)
    contradiction

/- 3 points -/
theorem problem4d {f : X → ℕ} {x0 : X} (h0 : f x0 = 0) {i : X → X}
    (hi : ∀ x, f (i x) = f x + 1) : Surjective f := by
    dsimp [Surjective]
    intro y
    simple_induction y with k IH
    · -- base case
      use x0
      apply h0
    · -- inductive step
      obtain ⟨x, hx⟩ := IH
      use (i x)
      have h_goal: f (i x) = k + 1 := by
      {
        rw[hi, hx]
      }
      apply h_goal

/- 2 points -/
theorem problem5a : Bijective (fun (x : ℝ) ↦ 4 - 3 * x) := by
  dsimp [Bijective]
  constructor
  . dsimp [Injective]
    intro x1 x2 hx
    calc
      x1 = ((4 -3 * x1) -4)/ -3 := by ring
      _ = (4 - 3 * x2 -4)/ -3 := by rw[hx]
      _ = x2 := by ring
  . dsimp [Surjective]
    intro y
    use (-y + 4)/3
    ring

/- 2 points -/
theorem problem5b : ¬ Bijective (fun (x : ℝ) ↦ x ^ 2 + 2 * x) := by
  dsimp [Bijective]
  dsimp [Surjective]
  push_neg
  right
  use -2
  intro x
  apply ne_of_gt
  have h_goal : x ^ 2 + 2 * x > -2 := by
    calc
      x ^ 2 + 2 * x = (x + 1) ^ 2 - 1 := by ring
      _ ≥ 0 - 1 := by extra
      _ = -2 + 1:= by numbers
      _ > -2 := by extra
  apply h_goal

def Inverse (f : X → Y) (g : Y → X) : Prop := g ∘ f = id ∧ f ∘ g = id

def u (x : ℝ) : ℝ := 5 * x + 1

noncomputable def v (x : ℝ) : ℝ := (x - 1) / 5

/- 3 points -/
theorem problem5c : Inverse u v := by
  dsimp [Inverse]
  constructor
  . ext x
    calc
      (v ∘ u) x = v (u x) := by rfl
      _ = (5 * x + 1 - 1) / 5 := by rfl
      _ = x := by ring
  . ext x
    calc
      (u ∘ v) x = u (v x) := by rfl
      _ = (5 * ((x - 1) / 5)) + 1 := by rfl
      _ = x := by ring

/- 3 points -/
theorem problem5d {f : X → Y} (hf : Injective f) {g : Y → Z} (hg : Injective g) :
    Injective (g ∘ f) := by
    dsimp[Injective]
    intro x1 x2 h
    apply hf (hg h)
