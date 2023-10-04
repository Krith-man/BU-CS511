import Mathlib.Data.Real.Basic
import Mathlib.Tactic.IntervalCases
import Library.Theory.Comparison
import Library.Theory.Parity
import Library.Theory.Prime
import Library.Tactic.ModCases
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel
import Library.Tactic.Use

-- Exercise 5a)
-- 4.1.3. 
example {a b : ℝ} (h : ∀ x, x ≥ a ∨ x ≤ b) : a ≤ b := by
  have h1 : (a+b)/2 ≥ a ∨ (a+b)/2 ≤ b := by apply h
  obtain ha | ha := h1
  . calc
      b =  2 * ( (a + b) / 2 ) - a := by ring
      _ ≥ 2 * a - a := by rel [ha]
      _ = a := by ring
  . calc
      a =  2 * ( (a + b) / 2 ) - b := by ring
      _ ≤  2 * b - b := by rel [ha]
      _ = b := by ring  
  
-- Exercise 5b)
-- 4.1.6. 
example : ∃ c : ℝ, ∀ x y, x ^ 2 + y ^ 2 ≤ 4 → x + y ≥ c := by
  dsimp
  use -3
  intro x y h
  have hp' : -3 ≤ (x+y) ∧ (x+y) ≤ 3
  · apply abs_le_of_sq_le_sq'
    calc 
      (x+y)^2 ≤ (x+y)^2 + (x-y)^2 := by extra
      _ = 2 * (x ^ 2 + y ^ 2) := by ring
      _ ≤ 2 * 4 := by rel[h]
      _ ≤  3 ^ 2 := by numbers
    numbers
  addarith[hp']

-- Exercise 5c)
-- Exercise 2 - 4.1.10 
example {n : ℤ} (hn : ∀ m, 1 ≤ m → m ≤ 5 → m ∣ n) : 15 ∣ n := by
  -- Follow teacher assistant comment on Piazza about "simp at" command
  have h3 := hn 3
  simp at h3 
  have h5 := hn 5
  simp at h5
  obtain ⟨a, ha⟩ := h3
  obtain ⟨b, hb⟩ := h5
  use -3 * b + 2 * a
  calc 
    n = -9 * n  + 10 * n := by ring
    _ = -9 * (5 * b) + 10 * n := by rw[hb]
    _ = 15 * (-3 * b) + 10 * n := by ring
    _ = 15 * (-3 * b) + 10 * (3 * a) := by rw[ha]
    _ = 15 * (-3 * b) + 15 * (2 * a) := by ring
    _ = 15 * (-3 * b + 2 * a) := by ring
  
notation3 (prettyPrint := false) "forall_sufficiently_large "(...)", "r:(scoped P => ∃ C, ∀ x ≥ C, P x) => r

-- Exercise 5d)
-- Exercise 4 - 4.1.10 
example : forall_sufficiently_large x : ℝ, x ^ 3 + 3 * x ≥ 7 * x ^ 2 + 12 := by
  dsimp
  use 7
  intro n hn
  calc
    n ^ 3 + 3 * n  = n * ( n ^ 2  + 3 ) := by ring
    _ ≥ 7 * ( n ^ 2  + 3 ) := by rel[hn]
    _ = 7 * n ^ 2 + 21 := by ring  
    _ = 7 * n ^ 2 + 12 + 9 := by ring
    _ ≥ 7 * n ^ 2 + 12 := by extra