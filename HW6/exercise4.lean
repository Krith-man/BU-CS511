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

-- Exercise 4a)
-- Exercise 11 5.1.7
example {P Q : α → Prop} (h : ∀ x, P x ↔ Q x) : (∃ x, P x) ↔ (∃ x, Q x) := by
  constructor
  . intro h_eP
    obtain ⟨x, h_eP⟩ := h_eP
    have h_logic_eq := h x
    obtain ⟨h_right, h_left⟩ := h_logic_eq
    have h_eX: ∃ x, Q x
    · use x
      apply h_right h_eP
    apply h_eX
  . intro h_eX
    obtain ⟨x, h_eX⟩ := h_eX
    have h_logic_eq := h x
    obtain ⟨h_right, h_left⟩ := h_logic_eq
    have h_eP: ∃ x, P x
    · use x
      apply h_left h_eX
    apply h_eP

-- Exercise 4b)
-- Exercise 12 5.1.7
example (P : α → β → Prop) : (∃ x y, P x y) ↔ ∃ y x, P x y := by
  constructor
  . intro h_exy  
    obtain ⟨x, h_ey⟩ := h_exy
    obtain ⟨y, h_e⟩ := h_ey
    have h_new_ex: ∃ x, P x y
    · use x
      apply h_e
    have h_new_eyx: ∃ y x, P x y
    · use y
      apply h_new_ex
    apply h_new_eyx
  . intro h_eyx  
    obtain ⟨y, h_ex⟩ := h_eyx
    obtain ⟨x, h_e⟩ := h_ex
    have h_new_ey: ∃ y, P x y
    · use y
      apply h_e
    have h_new_exy: ∃ x y, P x y
    · use x
      apply h_new_ey
    apply h_new_exy

-- Exercise 4c)
-- Exercise 13 5.1.7
example (P : α → β → Prop) : (∀ x y, P x y) ↔ ∀ y x, P x y := by
  constructor
  . intro h_fa_xy
    have h_fa_yx: ∀ y x, P x y
    · intro y x
      apply h_fa_xy
    apply h_fa_yx
  . intro h_fa_xy
    have h_fa_yx: ∀ x y, P x y
    · intro x y
      apply h_fa_xy
    apply h_fa_yx

-- Exercise 4d)
-- Exercise 14 5.1.7
example (P : α → Prop) (Q : Prop) : ((∃ x, P x) ∧ Q) ↔ ∃ x, (P x ∧ Q) := by
  constructor
  . intro h
    obtain ⟨h_eP, h_Q⟩ := h
    obtain ⟨x, h_P⟩ := h_eP 
    have h1: ∃ x, P x ∧ Q
    · use x
      constructor
      . apply h_P
      . apply h_Q
    apply h1
  . intro h
    obtain ⟨x, h_PxQ⟩ := h
    have h2: (∃ x, P x) ∧ Q
    . constructor
      . use x
        apply And.left h_PxQ
      . apply And.right h_PxQ
    apply h2