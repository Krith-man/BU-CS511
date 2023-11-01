import Mathlib.Data.Real.Basic
import Library.Theory.Parity
import Library.Tactic.Induction
import Library.Tactic.ModCases
import Library.Tactic.Extra
import Library.Tactic.Numbers
import Library.Tactic.Addarith
import Library.Tactic.Use
notation3 (prettyPrint := false) "forall_sufficiently_large "(...)", "r:(scoped P => ∃ C, ∀ x ≥ C, P x) => r

-- Exercise 4a)
-- 6.1.3
theorem problem4a {a b d : ℤ} (h : a ≡ b [ZMOD d]) (n : ℕ) : a ^ n ≡ b ^ n [ZMOD d] := by
  simple_induction n with k IH
  . -- base case
    have h_base: a^0 - b^0 = d * 0 := by ring
    use 0
    apply h_base
  . -- inductive step
    obtain ⟨x, hx⟩ := IH
    obtain ⟨y, hy⟩ := h
    use a * x + b ^ k * y
    have h_base : a ^ (k + 1) - b ^ (k + 1) = d * (a * x + b ^ k * y) := by
    {
      calc
        a ^ (k + 1) - b ^ (k + 1) = a * (a ^ k - b ^ k) + b ^ k * (a - b) := by ring
        _ = a * (d * x) + b ^ k * (a - b) := by rw[hx]
        _ = a * (d * x) + b ^ k * (d * y) := by rw[hy]
        _ = d * (a * x + b ^ k * y) := by ring
    }
    apply h_base

-- Exercise 4b)
-- 6.1.6
theorem problem4b : forall_sufficiently_large n : ℕ, 2 ^ n ≥ n ^ 2 := by
  dsimp
  use 4
  intro n hn
  induction_from_starting_point n, hn with k hk IH
  · -- base case
    numbers
  · -- inductive step
    calc
      2 ^ (k + 1) = 2 * 2 ^ k := by ring
      _ ≥ 2 * k ^ 2 := by rel[IH]
      _ = k ^ 2 + k * k := by ring
      _ ≥ k ^ 2 + 4 * k := by rel[hk]
      _ = k ^ 2 + 2 * k + 2 * k := by ring
      _ ≥ k ^ 2 + 2 * k + 2 * 4 := by rel[hk]
      _ = (k + 1) ^ 2 + 7 := by ring
      _ ≥ (k + 1) ^ 2 := by addarith

-- Exercise 4c)
-- 6.1.7 Exercise 2
theorem problem4c {a : ℝ} (ha : -1 ≤ a) (n : ℕ) : (1 + a) ^ n ≥ 1 + n * a := by
  simple_induction n with k IH
  · -- base case
    have h_base: (1 + a) ^ 0 ≥ 1 + 0 * a := by
    {
      calc
       (1 + a) ^ 0 = 1 := by ring
       _ = 1 + (0 * a) := by ring
       _ ≥ _ := by addarith
    }
    apply h_base
  · -- inductive step
    have ha: (1 + a) ≥ 0 := by addarith[ha]
    calc
      (1 + a) ^ (k + 1) = (1 + a) ^ k * (1 + a) := by ring
      _ ≥ (1 + k * a) * (1 + a) := by rel[IH]
      _ = 1 + a + k * a + k * a ^ 2:= by ring
      _ = 1 + (k + 1) * a + k * a ^ 2:= by ring
      _ ≥ 1 + (k + 1) * a := by extra

-- Exercise 4d)
-- 6.1.7 Exercise 6
theorem problem4d : forall_sufficiently_large n : ℕ, (3:ℤ) ^ n ≥ 2 ^ n + 100 := by
  dsimp
  use 5
  intro n hn
  induction_from_starting_point n, hn with k hk IH
  · -- base case
    numbers
  · -- inductive step
    calc
      (3:ℤ) ^ (k + 1) = 3 * (3 ^ k) := by ring
      _ ≥ 3 * (2 ^ k + 100) := by rel[IH]
      _ = 2 * (2 ^ k + 100) + (2 ^ k + 100) := by ring
      _ ≥ 2 * (2 ^ k + 100) := by extra
      _ = 2 ^ (k + 1) + 100 + 100 := by ring
      _ ≥ 2 ^ (k + 1) + 100 := by extra
