import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

-- Page 16
example {p q r : Prop} (h_p: p) : q → (p ∧ q) := by 
intro h_q
apply And.intro h_p h_q -- ‘And.intro’ is ‘∧I’ in LE A N 4


-- Page 19
example {p q r : Prop} (h : p → (q → r)) : p ∧ q → r := by
intro h_pq
obtain ⟨h_p, h_q⟩ := h_pq
have h_qr : q → r := by apply h h_p
apply h_qr h_q