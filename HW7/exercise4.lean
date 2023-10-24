import Mathlib.Data.Real.Basic
import Mathlib.Tactic.IntervalCases
import Library.Theory.Comparison
import Library.Theory.Parity
import Library.Theory.Prime
import Library.Tactic.Rel
import Library.Tactic.ModCases
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel
import Library.Tactic.Use

-- Exercise 4a)
-- 5.3.5
example : ¬ (∃ n : ℕ, n ^ 2 = 2) := by
  push_neg
  intro n
  have hn := le_or_succ_le n 1
  obtain hn | hn := hn
  · apply ne_of_lt
    calc
      n ^ 2 ≤ 1 ^ 2 := by rel [hn]
      _ < 2 := by numbers
  · apply ne_of_gt
    have h2 : 2 < n ^ 2 := by
    {
      calc
        2 < 2 ^ 2 := by addarith
        _ ≤ n ^ 2 := by rel[hn] 
    }
    apply h2

-- Exercise 4b)
-- Exercise 2 5.3.6
lemma right_arrow: ¬(P → Q) → P ∧ ¬Q := by
  intro h 
  by_cases h_cases : (P ∧ ¬ Q)
  · apply h_cases 
  · have h_contradiction : P → Q
    · intro hp
      by_cases hq : Q
      · apply hq 
      · have hpq: P ∧ ¬ Q := And.intro hp hq
        contradiction 
    contradiction

lemma left_arrow: P ∧ ¬Q → ¬(P → Q) := by
  intro h
  by_cases h_cases : P → Q
  · have h_contradiction : ¬ (P ∧ ¬ Q)
    · by_cases h_cases_2 : P ∧ ¬ Q
      · have hp: P := And.left h
        have h_notq: ¬ Q := And.right h_cases_2
        have hq: Q := by apply h_cases hp
        contradiction
      · apply h_cases_2 
    contradiction 
  · apply h_cases

      
example (P Q : Prop) : ¬ (P → Q) ↔ (P ∧ ¬ Q) := by
  constructor
  · apply right_arrow
  . apply left_arrow



