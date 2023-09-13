import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

-- A (solution 1)
example {P Q R : Prop} (h : (P ∧ Q) → R) : P → (Q → R) := by 
intro PP QQ  -- assume P, Q
have PQ: P ∧ Q := by apply And.intro PP QQ -- P^Q
-- have h_R: R := by apply h h_PQ -- R
apply h PQ -- R

-- A (solution 2)
example {P Q R : Prop} (h : (P ∧ Q) → R) : P → (Q → R) := by
intro PP
have QR: (Q → R) := by
  intro QQ
  have PQ: P ∧ Q := by apply And.intro PP QQ -- P^Q
  -- have RR: R := by apply h PQ -- R
  -- apply RR
  apply h PQ
apply QR