import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

example {P Q R : Prop} (h : (P ∧ Q) → R) : P → (Q → R) := by
intro PP
have QR: (Q → R) := by
  intro QQ
  have PQ: P ∧ Q := by apply And.intro PP QQ -- P^Q
  apply h PQ
apply QR