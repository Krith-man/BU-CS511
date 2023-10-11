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
-- 4.3.2
example : ∃! x : ℚ, ∀ a, a ≥ 1 → a ≤ 3 → (a - x) ^ 2 ≤ 1 := by
  use 2
  dsimp
  constructor 
  . intro a ha ha'
    have h1: -1 ≤ a - 2 := by
    {
      calc
        a - 2 = a - 2 := by ring
        _ ≥ 1 - 2 := by rel[ha]
        _ ≥ -1 := by numbers
    }  
    have h2: a - 2 ≤ 1 := by
    {
      calc
        a - 2 = a - 2 := by ring
        _ ≤  3 - 2 := by rel[ha']
        _ ≤  1 := by numbers
    }  
    have h_3: (a - 2) ^ 2 ≤ 1 ^ 2 := by apply sq_le_sq' h1 h2
    calc
      (a - 2) ^ 2 ≤ 1 ^ 2 := by apply h_3
      _ ≤ 1 := by numbers
  . intro y ha
    -- Thanks to instructor comment on Piazza
    have ha' := ha 1 
    have ha'' : (1-y) ^ 2 ≤ 1 := by 
    {
      apply ha'
      simp
      simp
    }
    have hb' := ha 3 
    have hb'' : (3-y) ^ 2 ≤ 1 := by 
    {
      apply hb'
      simp
      simp
    }
    have hqe0: (y - 2) ^ 2 ≥  0 
    {
      calc 
        (y - 2) ^ 2 ≥ 0 := by extra
    }
    have hle0: (y - 2) ^ 2 ≤ 0 
    {
      calc
        (y - 2) ^ 2 = ((1 - y) ^ 2 + (3 - y) ^ 2 - 2) / 2 := by ring
        _ ≤ (1 + (3 - y) ^ 2 - 2) / 2 := by rel[ha'']
        _ ≤ (1 + 1 - 2) / 2 := by rel[hb'']
        _ = 0  := by numbers
    }  
    have hsq: (y - 2) ^ 2 = 0 := by apply le_antisymm hle0 hqe0
    cancel 2 at hsq
    have he2: y = 2 := by 
    {
      calc
          y = (y - 2) + 2 := by ring
          _ = 0 + 2 := by rw[hsq]
          _ = 2 :=by numbers
    }
    apply he2

-- Exercise 5b)
-- Exercise 1 - 4.3.5
example : ∃! x : ℚ, 4 * x - 3 = 9 := by
  use 3
  dsimp
  constructor
  · numbers
  intro y hy
  calc
    y = (4 * y - 3 + 3) / 4 := by ring
    _ = (9 + 3) / 4 := by rw [hy]
    _ = 3 := by numbers

-- Exercise 5c)
-- Exercise 2 - 4.3.5
example : ∃! n : ℕ, ∀ a, n ≤ a := by
  use 0
  dsimp
  constructor
  . intro a
    addarith
  intro x hx
  have hx' : x ≤ 0 := hx 0
  addarith[hx']