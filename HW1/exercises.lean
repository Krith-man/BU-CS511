import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

-- Exercise 3a
example {P Q R : Prop} (h : (P ∧ Q) → R) : P → (Q → R) := by
intro PP
have QR: (Q → R) := by
  intro QQ
  have PQ: P ∧ Q := by apply And.intro PP QQ -- P^Q
  apply h PQ
apply QR

-- Exercise 3b
example {P Q R : Prop} (h : P → (Q → R)) : (P → Q) → (P → R) := by
intro P_Q -- Assume (P → Q)
have P_R: (P → R) := by
  intros PP -- Assume P
  have QQ: Q := by apply P_Q PP -- Q
  have Q_R: (Q → R) := by apply h PP -- (Q → R) 
  apply Q_R QQ
apply P_R 

-- Exercise 3c
axiom notnotE {P : Prop} (h : ¬ ¬ P) : P
example {P Q R : Prop} (h1 : (P ∧ ¬Q) → R) (h_notR : ¬R) (h_P : P) : Q := by
have notnotQ : ¬¬Q := by
  intro notQ -- Assume ¬Q
  have P_notQ : P ∧ ¬Q := And.intro h_P notQ -- P ∧ ¬Q
  have RR : R := h1 P_notQ -- R
  apply h_notR RR -- Reach Contradiction 
apply notnotE notnotQ  -- Use Axiom

-- Exercise 4a
-- Example 1.3.1
example {a b : ℤ} (h1 : a = 2 * b + 5) (h2 : b = 3) : a = 11 :=
  calc
    a = 2 * b + 5 := by rw[h1]
    _ = 2 * 3 + 5 := by rw[h2]
    _ = 11 := by ring

-- Exercise 4b
-- Example 1.3.2
example {x : ℤ} (h1 : x + 4 = 2) : x = -2 :=
  calc
    x = (x + 4) - 4 := by ring
    _ = 2 - 4 := by rw[h1]
    _ = -2 := by ring

-- Exercise 4c
-- Example 1.3.3
example {a b : ℝ} (h1 : a - 5 * b = 4) (h2 : b + 2 = 3) : a = 9 :=
  calc
    a = (a - 5 * b) + 5 * b := by ring
    _ = 4 + 5 * b := by rw[h1]
    _ = -6 + 5 * (b + 2) := by ring
    _ = -6 + 5 * 3 := by rw[h2]
    _ = 9 := by ring