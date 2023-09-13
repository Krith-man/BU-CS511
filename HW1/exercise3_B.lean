import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

example {P Q R : Prop} (h : P → (Q → R)) : (P → Q) → (P → R) := by
intro P_Q -- Assume (P → Q)
have P_R: (P → R) := by
  intros PP -- Assume P
  have QQ: Q := by apply P_Q PP -- Q
  have Q_R: (Q → R) := by apply h PP -- (Q → R) 
  apply Q_R QQ
apply P_R 