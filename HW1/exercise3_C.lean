import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

-- C
axiom notnotE {P : Prop} (h : ¬ ¬ P) : P

example {P Q R : Prop} (h1 : (P ∧ ¬Q) → R) (h_notR : ¬R) (h_P : P) : Q := by
have notnotQ : ¬¬Q := by
  intro notQ -- Assume ¬Q
  have P_notQ : P ∧ ¬Q := And.intro h_P notQ -- P ∧ ¬Q
  have RR : R := h1 P_notQ -- R
  apply h_notR RR -- Reach Contradiction 
apply notnotE notnotQ  -- Use Axiom