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

-- Exercise 6a)
-- 4.2.5. 
example {x : ℝ} : x ^ 2 + x - 6 = 0 ↔ x = -3 ∨ x = 2 := by
  constructor
  . intro h
    have h1: (x + 3) * (x - 2) = 0 := by
    {
      calc
        (x + 3) * (x - 2) = x ^ 2 + x - 6 := by ring
        _ = 0 := by rw[h]
    }
    have h2 := eq_zero_or_eq_zero_of_mul_eq_zero h1
    obtain hx | hx := h2
    left
    . calc
        x = (x + 3) - 3 := by ring
        _ = 0 - 3 := by rw[hx]
        _ = -3 := by numbers
    right
    . calc
        x = (x - 2) + 2 := by ring
        _ = 0 + 2 := by rw[hx]
        _ = 2 := by numbers
  . intro h
    obtain hx | hx := h
    . calc
        x ^ 2 + x - 6 = (x + 3) * (x - 2) := by ring
        _ = (-3 + 3) * (x - 2) := by rw[hx]
        _ = 0 := by ring
    . calc 
        x ^ 2 + x - 6 = (x - 2) * (x + 3) := by ring
        _ = (2 - 2) * (x + 3) := by rw[hx]
        _ = 0 := by ring

-- Exercise 6b)
-- 4.2.6. 
example {a : ℤ} : a ^ 2 - 5 * a + 5 ≤ -1 ↔ a = 2 ∨ a = 3 := by
  constructor
  . intro h
    have h1 : -1 ≤ (2 * a - 5) ∧ (2 * a - 5) ≤ 1
    · apply abs_le_of_sq_le_sq'
      calc
        (2 * a - 5) ^ 2 = 4 * a^2 - 2 * 2 * 5 * a + 25 :=by ring
        _ = 4 * (a ^ 2 - 5 * a + 5) + 5 := by ring
        _ ≤ 4 * (-1) + 5 := by rel[h]
        _ ≤  1 ^ 2 := by numbers
      numbers
    have h_1l : -1 ≤ (2 * a - 5) := And.left h1
    have h_1r : (2 * a - 5) ≤ 1 := And.right h1
    have h_2a: 2 * 2 ≤ 2 * a := by   
    {
      calc 
        2 * 2 = - 1 + 3 + 2 := by ring
        _ ≤  (2 * a - 5) + 3 + 2 := by rel[h_1l]
        _ = 2 * a := by ring
    }
    cancel 2 at h_2a
    have h_2a': 2 * a ≤ 2 * 3 := by   
    {
      calc 
        2 * a = (2 * a + - 5) + 5 := by ring
        _ ≤ 1 + 5 := by addarith[h_1r]
        _ = 2 * 3 := by numbers
    }
    cancel 2 at h_2a'
    interval_cases a
    · left
      numbers -- show `a = 2`
    · right
      numbers -- show `a = 3`
  . intro h 
    obtain ha | ha := h
    .calc 
      a ^ 2 - 5 * a + 5 ≤ 2 ^ 2 - 5 * 2 + 5 := by rw[ha]
      _ ≤ -1 := by numbers 
    .calc 
      a ^ 2 - 5 * a + 5 ≤ 3 ^ 2 - 5 * 3 + 5 := by rw[ha]
      _ ≤ -1 := by numbers 