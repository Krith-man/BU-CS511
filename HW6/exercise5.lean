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

def Tribalanced (x : ℝ) : Prop := ∀ n : ℕ, (1 + x / n) ^ n < 3

def Superpowered (k : ℕ) : Prop := ∀ n : ℕ, Prime (k ^ k ^ n + 1)

theorem superpowered_one : Superpowered 1 := by
 intro n
 conv => ring_nf -- simplifies goal from `Prime (1 ^ 1 ^ n + 1)` to `Prime 2`
 apply prime_two

-- Exercise 5a)
-- Exercise 1 5.2.7
example : ∃ x : ℝ, Tribalanced x ∧ ¬ Tribalanced (x + 1) := by
  by_cases h2: Tribalanced 1
  . use 1
    constructor
    . apply h2
    . intro h
      simp [Tribalanced] at h
      have h_trib_2:= h 2
      simp at h_trib_2
      have : 4 < 3 := by
      {
        calc
          4 = (1 + 1) ^ 2 := by ring
          _ < 3 := by addarith[h_trib_2]
      }
      contradiction
  . use 0
    constructor
    . have h_trib_0: ∀ n : ℕ, (1 + (0:ℝ) / n) ^ n < 3 := by
      {
        intro n
        calc
          (1 + (0:ℝ) / n) ^ n = 1 := by ring
              _ < 3 := by numbers
      }
      apply h_trib_0
    . by_cases h2: Tribalanced (0+1)
      . simp at h2 
        contradiction
      . apply h2

-- Exercise 5b)
-- Exercise 3 5.2.7
example : ∃ k : ℕ, Superpowered k ∧ ¬ Superpowered (k + 1) := by
  use 1
  constructor
  . apply superpowered_one
  . intro h
    dsimp [Superpowered] at h
    have h_4294967297_prime : Prime ((1+1) ^ (1+1) ^ 5 + 1) := h 5
    conv at h_4294967297_prime => numbers
    have h_4294967297_not_prime : ¬ Prime 4294967297
    · apply not_prime 641 6700417
      · numbers -- show `641 ≠ 1`
      · numbers -- show `641 ≠ 4294967297`
      · numbers -- show ` 4294967297 = 641 * 6700417`
    contradiction

