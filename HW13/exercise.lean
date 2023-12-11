import Mathlib.Data.Real.Basic
import Mathlib.Tactic.GCongr
import Mathlib.Tactic.IntervalCases
import Mathlib.Tactic.Set
import Library.Theory.Comparison
import Library.Theory.InjectiveSurjective
import Library.Theory.Parity
import Library.Theory.ParityModular
import Library.Theory.Prime
import Library.Tactic.Addarith
import Library.Tactic.Cancel
import Library.Tactic.Define
import Library.Tactic.ExistsDelaborator
import Library.Tactic.Extra
import Library.Tactic.FiniteInductive
import Library.Tactic.Induction
import Library.Tactic.ModCases
import Library.Tactic.Numbers
import Library.Tactic.Product
import Library.Tactic.Rel
import Library.Tactic.Use

set_option push_neg.use_distrib true
open Set

notation:50 a:50 " ⊈ " b:50 => ¬ (a ⊆ b)

/- 3 points -/
theorem problem4a : {a : ℕ | 5 ∣ a} ⊈ {x : ℕ | 20 ∣ x} := by
  /-Follow 9.1.4 Example-/
  dsimp [Set.subset_def]
  push_neg
  use 5
  constructor
  . simp
  . simp

/- 3 points -/
theorem problem4b : {k : ℤ | 7 ∣ 9 * k} = {l : ℤ | 7 ∣ l} := by
  /-Follow 9.1.7 Example-/
  ext n
  dsimp
  constructor
  . intro hn
    obtain ⟨a, ha⟩ := hn
    use (-3 * a + 4 * n)
    calc
      n = - 3 * (9 * n) + 28 * n := by ring
      _ = -3 * (7 * a) + 28 * n := by rw [ha]
      _ = -3 * (7 * a) + 4 * 7 * n := by ring
      _ = 7 * (-3 * a + 4 * n) := by ring
  . intro hn
    obtain ⟨a, ha⟩ := hn
    use (9 * a)
    calc
      9 * n = 9 * (7 * a) := by rw[ha]
      _ = 7 * (9 * a) := by ring

/- 4 points -/
theorem problem4c : {x : ℝ | x ^ 2 + 3 * x + 2 = 0} = {-1, -2} := by
  /-Follow 9.1.8 Example-/
  ext x
  dsimp
  constructor
  . intro h
    have hx :=
    calc
      (x + 1) * (x + 2) = x ^ 2 + 3 * x + 2 := by ring
        _ = 0 := by rw [h]
    rw [mul_eq_zero] at hx
    obtain hx | hx := hx
    · left
      addarith [hx]
    · right
      addarith [hx]
  · intro h
    obtain h | h := h
    · calc x ^ 2 + 3 * x + 2 = (-1) ^ 2 + 3 * (-1) + 2 := by rw [h]
        _ = 0 := by numbers
    · calc x ^ 2 + 3 * x + 2 = (-2) ^ 2 + 3 * (-2) + 2 := by rw [h]
        _ = 0 := by numbers

/- 3 points -/
theorem problem5a : {r : ℤ | r ≡ 7 [ZMOD 10] }
    ⊆ {s : ℤ | s ≡ 1 [ZMOD 2]} ∩ {t : ℤ | t ≡ 2 [ZMOD 5]} := by
  /-Follow 9.1.7 Example-/
  dsimp [Set.subset_def]
  intro x hx
  obtain ⟨y, hx⟩ := hx
  constructor
  . use (5 * y + 3)
    calc
      x - 1 = (x - 7) + 6 := by ring
      _ = 10 * y + 6 := by rw[hx]
      _ = 2 * (5 * y + 3) := by ring
  . use (2 * y + 1)
    calc
      x - 2 = (x - 7) + 5 := by ring
      _ = 10 * y + 5 := by rw[hx]
      _ = 5 * (2 * y + 1) := by ring

/- 3 points -/
theorem problem5b : {n : ℤ | 5 ∣ n} ∩ {n : ℤ | 8 ∣ n} ⊆ {n : ℤ | 40 ∣ n} := by
  /-Follow 9.1.7 Example-/
  dsimp [Set.subset_def]
  intro x hx
  obtain ⟨hx1, hx2⟩ := hx
  obtain ⟨x1, hx1⟩ := hx1
  obtain ⟨x2, hx2⟩ := hx2
  use (-3 * x2 + 2 * x1)
  calc
    x = - 15 * x + 16 * x:= by ring
    _ = - 15 * (8 * x2) + 16 * x := by rw[hx2]
    _ = - 15 * (8 * x2) + 16 * (5 * x1) := by rw[hx1]
    _ = 40 * (-3 * x2 + 2 * x1) := by ring

/- 4 points -/
theorem problem5c :
    {n : ℤ | 3 ∣ n} ∪ {n : ℤ | 2 ∣ n} ⊆ {n : ℤ | n ^ 2 ≡ 1 [ZMOD 6]}ᶜ := by
  /-Follow 9.2.7 Example-/
  dsimp [Set.subset_def]
  intro x hx ha
  obtain ⟨a, ha⟩ := ha
  obtain hx1 | hx2 := hx
  . obtain ⟨b, hx1⟩ := hx1
    have h: 3 * (3 * b ^ 2 - 2 * a) = 1 := by
    {
      calc
        3 * (3 * b ^ 2 - 2 * a) = 9 * b ^ 2 - 6 * a := by ring
        _ = 9 * b ^ 2 - (x ^ 2 - 1) := by rw[ha]
        _ = 9 * b ^ 2 - ((3 * b) ^ 2 - 1) := by rw[hx1]
        _ = 1 := by ring
    }
    obtain h1 | h2 := le_or_lt (3 * (3 * b ^ 2 - 2 * a)) 0
    . have h': 3 * (3 * b ^ 2 - 2 * a) < 1 := by addarith[h1]
      have : 3 * (3 * b ^ 2 - 2 * a) ≠ 1 := by apply ne_of_lt h'
      contradiction
    . have h2_new: (3 * b ^ 2 - 2 * a) ≥ 1 := by addarith[h2]
      have h': 3 * (3 * b ^ 2 - 2 * a) > 1 := by
      {
        calc
          3 * (3 * b ^ 2 - 2 * a) ≥ 3 * 1 := by rel[h2_new]
          _ > 1 := by addarith
      }
      have : 3 * (3 * b ^ 2 - 2 * a) ≠ 1 := by apply ne_of_gt h'
      contradiction
  . obtain ⟨b, hx2⟩ := hx2
    have h: 2 * (2 * b ^ 2 - 3 * a) = 1 := by
    {
      calc
        2 * (2 * b ^ 2 - 3 * a) = 4 * b ^ 2 - 6 * a := by ring
        _ = 4 * b ^ 2 - (x ^ 2 - 1) := by rw[ha]
        _ = 4 * b ^ 2 - ((2 * b) ^ 2 - 1) := by rw[hx2]
        _ = 1 := by ring
    }
    obtain h1 | h2 := le_or_lt (2 * (2 * b ^ 2 - 3 * a)) 0
    . have h': 2 * (2 * b ^ 2 - 3 * a) < 1 := by addarith[h1]
      have : 2 * (2 * b ^ 2 - 3 * a) ≠ 1 := by apply ne_of_lt h'
      contradiction
    . have h2_new: (2 * b ^ 2 - 3 * a) ≥ 1 := by addarith[h2]
      have h': 2 * (2 * b ^ 2 - 3 * a) > 1 := by
      {
        calc
          2 * (2 * b ^ 2 - 3 * a) ≥ 2 * 1 := by rel[h2_new]
          _ > 1 := by addarith
      }
      have : 2 * (2 * b ^ 2 - 3 * a) ≠ 1 := by apply ne_of_gt h'
      contradiction
