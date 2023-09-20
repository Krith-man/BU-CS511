import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

--  Example 1.4.11.1
example {x y : ℤ} (h1 : x + 3 ≥ 2 * y) (h2 : 1 ≤ y) : x ≥ -1 :=
  calc
    x = x + 3 - 3 := by ring
    _ ≥ 2 * y - 3 := by rel [h1]
    _ ≥ 2 * 1 - 3 := by rel [h2]
    _ ≥ -1 := by numbers 

--  Example 1.4.11.2   
example {a b : ℚ} (h1 : 3 ≤ a) (h2 : a + 2 * b ≥ 4) : a + b ≥ 3 :=
calc
  a + b = (2 * (a + b))/2 := by ring
  _ = a / 2 + (a + 2 * b) / 2 := by ring
  _ ≥ a / 2 + 4 / 2 := by rel [h2]
  _ ≥ a / 2 + 2 := by linarith
  _ ≥ 3 / 2 + 2 := by rel [h1]
  _ ≥ 3 := by numbers

--  Example 1.4.11.3
example {x : ℤ} (hx : x ≥ 9) : x ^ 3 - 8 * x ^ 2 + 2 * x ≥ 3 :=
  calc
    x ^ 3 - 8 * x ^ 2 + 2 * x = x * (x - 9) * (x + 1) + 11 * x := by ring
    _ ≥ x * (9 - 9) * (x + 1) + 11 * x := by rel [hx]
    _ ≥ 11 * x := by linarith
    _ ≥ 11 * 9 := by rel [hx]
    _ ≥ 3 := by numbers
    