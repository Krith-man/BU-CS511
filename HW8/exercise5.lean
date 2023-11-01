import Mathlib.Data.Real.Basic
import Library.Theory.Parity
import Library.Tactic.Induction
import Library.Tactic.ModCases
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Use

def foo : ℕ → ℕ
  | 0     => 1
  | n + 1 => foo (n) + 2 * n + 3

-- Exercise 5b
theorem problem5b {n : ℕ} : ∃ (k : ℕ), foo (n) = k ^ 2 := by
  use n + 1 
  simple_induction n with n IH
  . dsimp[foo]
    numbers
  . dsimp[foo]
    simp
    rw[IH]
    ring
