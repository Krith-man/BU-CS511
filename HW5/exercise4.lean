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

-- Exercise 4a)
-- Exercise 2 - 4.2.10
example {n : ℤ} : 63 ∣ n ↔ 7 ∣ n ∧ 9 ∣ n := by
  constructor
  . intro h
    obtain ⟨a, h⟩ := h
    constructor
    . use 9 * a
      calc 
        n = 63 * a := by rw[h]
        _ = 7 * (9 * a) := by ring
    . use 7 * a
      calc 
        n = 63 * a := by rw[h]
        _ = 9 * (7 * a) := by ring
  . intro h
    have h7 := And.left h 
    obtain ⟨a, h7⟩ := h7
    have h9 := And.right h 
    obtain ⟨b, h9⟩ := h9
    use -3 * a + 4 * b
    calc 
      n = -27 * n  + 28 * n := by ring
      _ = -27 * (7 * a) + 28 * n := by rw[h7]
      _ = -27 * (7 * a) + 28 * (9 * b) := by rw[h9]
      _ = -7 * 9 * (3 * a) + 7 * 9 * (4 * b) := by ring
      _ = 63 * (-3 * a + 4 * b) := by ring
    

-- Exercise 4b)
-- Exercise 5 - 4.2.10
example {k : ℕ} : k ^ 2 ≤ 6 ↔ k = 0 ∨ k = 1 ∨ k = 2 := by
  constructor
  . intro h
    have h0 := le_or_gt k 0
    obtain hle0 | hg0 := h0
    · left 
      simp at hle0
      apply hle0 
    · right 
      have h1 := le_or_gt k 1 
      obtain hle1 | hg1 := h1 
      · left
        have hg1 : k ≥ 1 := by addarith [hg0] 
        apply le_antisymm hle1 hg1 
      · right 
        have hg2 : k ≥ 2 := by addarith [hg1] 
        have hl3:  k ^ 2 < 3 ^ 2
        {
          calc
            k ^ 2 ≤ 6 := by rel[h]
            _ < 6 + 3 := by extra
            _ = 3 ^ 2 := by numbers
        }
        cancel 2 at hl3
        addarith[hg2, hl3]
  . intro h
    obtain h0 | h12 := h
    . calc
      k ^ 2 = k * k := by ring
      _ = 0 * k := by rw[h0]
      _ ≤ 0 := by ring
      _ ≤ 6 := by addarith 
    . obtain h1 | h2 := h12
      . calc
        k ^ 2 = k * k := by ring
        _ = 1 * 1 := by rw[h1]
        _ ≤ 1 := by ring
        _ ≤ 6 := by addarith 
      . calc
        k ^ 2 = k * k := by ring
        _ = 2 * 2 := by rw[h2]
        _ ≤ 4 := by ring
        _ ≤ 6 := by addarith 