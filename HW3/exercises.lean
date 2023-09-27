import Mathlib.Data.Real.Basic
import Library.Theory.Comparison
import Library.Theory.Parity
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel
import Library.Tactic.Use

-- Homework Exercise 4
-- 2.5.2
example {t : ℝ} (h : ∃ a : ℝ, a * t < 0) : t ≠ 0 := by
  obtain ⟨x, hxt⟩ := h
  have H := le_or_gt x 0
  obtain hx | hx := H
  · have hxt' : 0 < (-x) * t := by addarith [hxt]
    have hx' : 0 ≤ -x := by addarith [hx]
    cancel -x at hxt'
    apply ne_of_gt
    apply hxt'
  · have h_xt' : 0 < x * (-t) := by 
    {
      calc
        0 < (-x) * t := by addarith[hxt]
        _ = x * (-t) := by ring
    }
    have hx' : 0 ≤ x := by addarith [hx]
    cancel x at h_xt'
    have h_xt': 0 > t := by addarith[h_xt']
    apply ne_of_lt
    apply h_xt'

-- 2.5.6
example (a : ℤ) : ∃ m n : ℤ, m ^ 2 - n ^ 2 = 2 * a + 1 := by
  use a+1, a
  ring

-- 2.5.7
example {p q : ℝ} (h : p < q) : ∃ x, p < x ∧ x < q := by
  have h_p1: p < (p + q) / 2 := by 
  {
    calc
        p = (p + p) / 2 := by ring
        _ < (p + q) / 2 := by addarith[h]
  }
  have h_p2: (p + q) / 2 < q := by 
  {
    calc
        (p + q) / 2 < (q + q) / 2 := by addarith[h]
        _ = q := by ring
  }
  use (p + q) / 2 
  constructor
  . apply h_p1
  . apply h_p2




-- Homework Exercise 5
-- 2.5.9 (Exercise 5)
example (x : ℚ) : ∃ y : ℚ, y ^ 2 > x := by
  have H := le_or_gt x 0
  obtain h_xle0 | h_xg0 := H
  · use x - 1
    have h_le0 :  (x - 1) ^ 2 > x := by 
    {
      have h_calc : -x ≥ 0 := by addarith[h_xle0]
      calc
        (x - 1) ^ 2 = 1 - 2 * x + x ^ 2 := by ring
        _ ≥ 1 - 2 * x  := by extra
        _ = 1 + 2 * -x := by ring 
        _ ≥ 1 + 2 * 0 := by rel[h_calc]
        _ = 1 := by ring
        _ > x := by addarith[h_xle0]
    }
    apply h_le0
  · use x + 1
    have h_g0 : (x + 1) ^ 2 > x := by 
    {
      calc
        (x + 1) ^ 2 = x ^ 2 + 2 * x + 1 := by ring
        _ ≥ 2 * x + 1 := by extra 
        _ > 2 * x := by extra
        _ = x + x := by ring
        _ > x := by addarith[h_xg0] 
    }
    apply h_g0
 
-- 2.5.9 (Exercise 6)
example {t : ℝ} (h : ∃ a : ℝ, a * t + 1 < a + t) : t ≠ 1 := by
  obtain ⟨a, h_a⟩ := h
  -- Need to form the hypothesis to "x*t < 0" as 2.5.2 example. 
  have h_a_new: (a-1) * (t-1) < 0 := by
  {
    have h_calc: a*t < a + t - 1 := by addarith[h_a]
    calc
      (a-1) * (t-1) = a*t - a - t + 1 := by ring
      _ < 0 := by addarith[h_calc]
  }
  -- Below this line, used the same code of 2.5.2 example as hint proposed
  have H := le_or_gt a 1
  obtain h_ale1 | h_ag1 := H
  . have h_at' : 0 < -(a-1) * (t-1) := by addarith [h_a_new]
    have h_a' : 0 ≤ -(a-1) := by addarith [h_ale1]
    cancel -(a-1) at h_at'
    have h_at':  1 < t  := by addarith[h_at']
    apply ne_of_gt
    apply h_at'
  . have h_at' : 0 < (a-1) * -(t-1) := by 
    {
      calc
        0 < -(a-1) * (t-1) := by addarith[h_a_new]
        _ = (a-1) * -(t-1) := by ring
    }
    have ha' : 0 ≤ a-1 := by addarith [h_ag1]
    cancel a-1 at h_at'
    have h_at':  1 > t  := by addarith[h_at']
    apply ne_of_lt
    apply h_at'

-- 2.5.9 (Exercise 7)
example {m : ℤ} (h : ∃ a, 2 * a = m) : m ≠ 5 := by
  obtain ⟨a, h_a⟩ := h
  have H := le_or_gt a 2
  obtain h_ale2 | h_ag2 := H
  . have h_ml5: m < 5 := by
    {
      calc
        m = 2 * a := by rw[h_a]
        _ ≤ 2 * 2 := by rel[h_ale2]
        _ < 5 := by numbers
    }
    apply ne_of_lt
    apply h_ml5
  . have h_mg5: m > 5 := by
    {
      have h_calc: a ≥ 3 := by addarith[h_ag2]
      calc
        m = 2 * a := by rw[h_a]
        _ ≥ 2 * 3 := by rel[h_calc]
        _ > 5 := by numbers
    }
    apply ne_of_gt
    apply h_mg5