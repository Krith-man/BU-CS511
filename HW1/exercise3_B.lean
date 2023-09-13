import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

-- B
example {P Q R : Prop} (h : P → (Q → R)) : (P → Q) → (P → R) := by
intro P_Q PP -- Assume (P → Q), P
have QQ: Q := by apply P_Q PP -- Q
have Q_R: (Q → R) := by apply h PP -- (Q → R)  
-- have RR : R := by apply Q_R QQ -- R
apply Q_R QQ 

-- B
example {P Q R : Prop} (h : P → (Q → R)) : (P → Q) → (P → R) := by
intro P_Q -- Assume (P → Q)
have P_R: (P → R) := by
  intros PP -- Assume P
  have QQ: Q := by apply P_Q PP -- Q
  have Q_R: (Q → R) := by apply h PP -- (Q → R) 
  apply Q_R QQ
  -- have RR : R := by apply Q_R QQ -- R
  -- apply RR
apply P_R 