import Mathlib.Data.Real.Basic
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Cancel

--  5c
lemma de_morgan_2 {p q : Prop} : ¬p∧¬q → ¬(p∨q) := by  -- obtained by closing box [2-9]
intro h
have h1: p∨q → ⊥ := by
{
  intro h_pq
  have h_bot_1: p → ⊥ := by  -- obtained by closing box [3-5]
  {
    intro h_p
    have not_p: ¬p := And.left h
    show False ; apply not_p h_p
  } 
  have h_bot_2: q → ⊥ := by  -- obtained by closing box [6-8]
  {
    intro h_q
    have not_q: ¬q := And.right h
    show False ; apply not_q h_q
  } 
  apply Or.elim h_pq h_bot_1 h_bot_2
}
apply h1 

--  5d
lemma de_morgan_3 {p q : Prop} : ¬p∨¬q → ¬(p∧q) := by
intro h
have h1: ¬p → ¬(p ∧ q) := by  -- obtained by closing box [2-6]
{ intro h_not_p
  have not_pq: ¬(p ∧ q) := by  -- obtained by closing box [3-5]
  {
    intro h_PQ
    have hp: p := And.left h_PQ
    show False ; apply h_not_p hp
  }
  apply not_pq
} 
have h2: ¬q → ¬(p ∧ q) := by  -- obtained by closing box [7-11]
{
  intro h_not_q
  have not_pq: ¬(p ∧ q) := by  -- obtained by closing box [8-10]
  {
    intro h_PQ
    have hq: q := And.right h_PQ
    show False ; apply h_not_q hq
  }
  apply not_pq
}
apply Or.elim h h1 h2