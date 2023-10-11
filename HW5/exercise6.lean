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
namespace Nat

-- Exercise 6a)
-- 4.4.4
example {p : ℕ} (hp : 2 ≤ p) (H : ∀ m : ℕ, 1 < m → m < p → ¬m ∣ p) : Prime p := by
  constructor
  · apply hp -- show that `2 ≤ p`
  intro m hmp
  have hp' : 0 < p := by extra
  have h1m : 1 ≤ m := Nat.pos_of_dvd_of_pos hmp hp'
  obtain hm | hm_left : 1 = m ∨ 1 < m := eq_or_lt_of_le h1m
  · -- the case `m = 1`
    left
    addarith [hm]
  . -- the case `1 < m`
    have hmgep : m ≤ p := Nat.le_of_dvd hp' hmp
    obtain hpem | hpgm : m = p ∨ m < p := eq_or_lt_of_le hmgep
    .  -- the case `m = p`
      right
      apply hpem
    .  -- the case `m < p`  
      have h2 : ¬m ∣ p := by 
      {
        apply H m
        apply hm_left 
        apply hpgm
      }
      contradiction
      
-- Exercise 6b)
-- 4.4.5
example {a b c : ℕ} (ha : 0 < a) (hb : 0 < b) (hc : 0 < c)
    (h_pyth : a ^ 2 + b ^ 2 = c ^ 2) : 3 ≤ a := by
  obtain hale2 | hage3 := le_or_gt a 2
  . obtain hble1 | hbge1 := le_or_gt b 1
    . 
      have hc: c ^ 2 < 3 ^ 2 := by  
      {
        calc 
          c ^ 2 = a ^ 2 + b ^ 2 := by rw[h_pyth]
          _ ≤  2 ^ 2 + 1 ^ 2 := by rel[hale2, hble1]
          _ = 4 + 1 := by numbers
          _ < 5 + 4 := by extra
          _ = 3 ^ 2 := by numbers
      } 
      have hc': c < 3 := by cancel 2 at hc
      -- Check all the cases for a,b,c 
      interval_cases a
      . interval_cases b 
        . interval_cases c 
          . contradiction 
          . contradiction 
      . interval_cases b 
        . interval_cases c 
          . contradiction 
          . contradiction
    . have hbc: b ^ 2 < c ^ 2 := by  
      {
        calc 
          b ^ 2 <  b ^ 2 + a ^ 2 := by extra
          _ = c ^ 2 := by addarith[h_pyth]
      }
      have hbc': b < c := by cancel 2 at hbc
      have hbg2: b ≥ 2 := by addarith[hbge1]
      have hbc'': c ≥ b + 1 := by addarith[hbc']
      have hbc_sq : c ^ 2 < (b + 1) ^ 2 := by 
      {
        calc
          c ^ 2 = a ^ 2 + b ^ 2 := by rw[h_pyth]
          _ ≤ 2 ^ 2 + b ^ 2 := by rel[hale2]
          _ = b ^ 2 + 2 * 2 := by ring 
          _ ≤ b ^ 2 + 2 * b := by rel[hbg2]
          _ < b ^ 2 + 2 * b + 1 := by extra
          _ = (b + 1) ^ 2 := by ring
      } 
      have : ¬ (c ≥ b + 1) := by 
      { 
        cancel 2 at hbc_sq
        addarith[hbc_sq]
      }
      contradiction
  . apply hage3

-- Exercise 6c)
-- Exercise 1 4.4.6
example {x y : ℝ} (n : ℕ) (hx : 0 ≤ x) (hn : 0 < n) (h : y ^ n ≤ x ^ n) :
    y ≤ x := by
    -- Utilize the comment of intrustor at Piazza post
    obtain hyleqx | hygx := le_or_gt y x
    . apply hyleqx
    . have h_not : ¬(y ^ n > x ^ n) := by addarith[h]
      have h_pow : y ^ n > x ^ n := by rel[hygx]
      contradiction

-- Exercise 6d)
-- Exercise 5 4.4.6
example (p : ℕ) (h : Prime p) : p = 2 ∨ Odd p := by
  obtain ⟨h_pge2, h_prime⟩ := h
  -- Split as even or odd 
  obtain h_even | h_odd := Nat.even_or_odd p
  . obtain ⟨x, h_even⟩ := h_even
    left
    -- Split as x ≤ 1 (p ≤ 2 * x) or x > 1 (p > 2 * x)
    obtain h_xle1 | h_xge1 := le_or_gt x 1 
    . have h_ple2: p ≤ 2 := by
      {
        calc
          p = 2 * x := by rw[h_even]
          _ ≤ 2 * 1 := by rel[h_xle1]
          _ = 2 := by numbers
      }
      apply le_antisymm h_ple2 h_pge2
    . -- My strategy is to extract the right wise 
      -- part of h_prime (m=1 ∨ m=p) by building 
      -- the "m|p" for m = 2. In succession, I will extract
      -- the 2=p to make this subsection true. 
      have h_2n: 2 ∣ p := by
      {
        use x
        calc
          p = 2 * x := by rw[h_even]
      }
      have h_prime': 2=1 ∨ 2=p := by apply h_prime 2 h_2n
      obtain h1 | h2 := h_prime'
      . contradiction
      . rw[h2]
  . right
    obtain ⟨x, h_odd⟩ := h_odd
    use x 
    calc
      p = 2 * x + 1 := by rw[h_odd]