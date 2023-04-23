import Mathlib.Data.String.Basic

-- Input Paths / Constants ----------------------------------
def lineBreak : String := 
  if System.Platform.isWindows then "\n0d\n" else "\n"

namespace day3

def day3_inputpath := System.FilePath.mk "/home/shash/School/2022—2023/SCHC411/AdventOfCode/input/day3.txt"

-- Function Definitions -------------------------------------
def break_input (s : String) : String × String :=
  let string_list := s.data
  

def check_arrays (s₁ s₂ : String) : String := sorry
   

def check_weight (list : List String) : Nat := sorry

-- def match_char (s : String) : Nat := 
--   match s with
--   | a, => 1
--   | b, => 2
--   | c, => 3
--   | d, => 4
--   | e, => 5
--   | f, => 6
--   | g, => 7
--   | h, => 8
--   | i, => 9
--   | j, => 10
--   | k, => 11
--   | l, => 12
--   | m, => 13
--   | n, => 14
--   | o, => 15
--   | p, => 16
--   | q, => 17
--   | r, => 18
--   | s, => 19
--   | t, => 20
--   | u, => 21
--   | v, => 22
--   | w, => 23
--   | x, => 24
--   | y, => 25
--   | z, => 26
--   | A, => 27
--   | B, => 28
--   | C, => 29
--   | D, => 30
--   | E, => 31
--   | F, => 32
--   | G, => 33
--   | H, => 34
--   | I, => 35
--   | J, => 36
--   | K, => 37
--   | L, => 38
--   | M, => 39
--   | N, => 40
--   | O, => 41
--   | P, => 42
--   | Q, => 43
--   | R, => 44
--   | S, => 45
--   | T, => 46
--   | U, => 47
--   | V, => 48
--   | W, => 49
--   | X, => 50
--   | Y, => 51
--   | Z, => 52

def match_char (s : String) : Nat := by
  match s with
  | "a" => 1
  | "b" => 2
  | "c" => 3
  
#eval match_char "a"


-- Answer Function ------------------------------------------
-- Day 3 | Question 1
def day3_question1 : IO Nat := do
  let input ← IO.FS.readFile day3_inputpath

  -- break input into 2 lists
  let (l₁ l₂) := break_input input

  -- for each string, get list from .data, and then take/drop to split it

  -- send two lists to loop method
  -- loop through each entry of first list, check if it is in the second
    -- if empty string, return empty string
    -- if string exists in second, return the string
    -- if string does not exist in second, continue recursively
  -- put all responses in list

  -- take in list, map all entries to a number depending on weight, return sum of list

-- #eval day3_question1