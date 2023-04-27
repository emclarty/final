import Std.Data.List.Basic
import Mathlib.Data.String.Basic

-- Input Paths / Constants ----------------------------------
def lineBreak : String := 
  if System.Platform.isWindows then "\n0d\n" else "\n"

namespace day3

def day3_inputpath := System.FilePath.mk "input/day3.txt"

-- Function Definitions -------------------------------------
def break_input (s : String) : List Char × List Char :=
  let string_list := s.data
  (string_list.take (string_list.length/2), string_list.drop (string_list.length/2))

def first (s : String) : Char :=
  s.data.get! 1

def match_char (s : String) : Nat :=
  let f := first s
  match f with
  | 'a' => 1
  | 'b' => 2
  | 'c' => 3
  | 'd' => 4
  | 'e' => 5 
  | 'f' => 6
  | 'g' => 7
  | 'h' => 8
  | 'i' => 9
  | 'j' => 10
  | 'k' => 11
  | 'l' => 12
  | 'm' => 13
  | 'n' => 14
  | 'o' => 15
  | 'p' => 16
  | 'q' => 17
  | 'r' => 18
  | 's' => 19
  | 't' => 20
  | 'u' => 21
  | 'v' => 22
  | 'w' => 23
  | 'x' => 24
  | 'y' => 25
  | 'z' => 26
  | 'A' => 27
  | 'B' => 28
  | 'C' => 29
  | 'D' => 30
  | 'E' => 31
  | 'F' => 32
  | 'G' => 33
  | 'H' => 34
  | 'I' => 35
  | 'J' => 36
  | 'K' => 37
  | 'L' => 38
  | 'M' => 39
  | 'N' => 40
  | 'O' => 41
  | 'P' => 42
  | 'Q' => 43
  | 'R' => 44
  | 'S' => 45
  | 'T' => 46
  | 'U' => 47
  | 'V' => 48
  | 'W' => 49
  | 'X' => 50
  | 'Y' => 51
  | 'Z' => 52
  | _ => 0

def breakLines (s : String) : List String :=
  s.splitOn "\n"

def groupByThrees {α : Type} (l : List α) : List (List α) :=
  match l with
  | [] => []
  | s::ss =>
      match groupByThrees ss with
      | [] => [[s]]
      | l::ls => if l.length = 3 then [s]::(l::ls) else (s::l)::ls

def inter (l : List String) : String :=
  match l with
  | [] => ""
  | [s] => s
  | s::ss => ⟨s.data.bagInter (inter ss).data⟩

def commonLetters (s : String) : List String :=
  groupByThrees (breakLines s)|>.map inter

-- Answer Function ------------------------------------------
-- Day 3 | Question 1
def part1 : IO Nat := do
  let input ← IO.FS.readFile day3_inputpath

  -- break the input file into a list of strings by line
  let line_by_line := input.splitOn "\n"
  
  -- break each line into two halves
  let halves := line_by_line.map break_input

  -- send two lists to loop method
  -- loop through each entry of first list, check if it is in the second
    -- if empty string, return empty string
    -- if string exists in second, return the string
    -- if string does not exist in second, continue recursively
  -- put all responses in list
  let shared := halves.map fun (l₁, l₂) => l₁.bagInter l₂

  -- map each shared character to its appropriate priority value
  let priorities := shared.map fun s => match_char ⟨s⟩

  -- take in list, map all entries to a number depending on weight, return sum of list
  return priorities.foldl (·+·) 0

-- Day 3 | Question 2
def part2 : IO Nat := do
  let input ← IO.FS.readFile day3_inputpath
  let shared := commonLetters input
  IO.println (shared)
  let priorities := shared.map match_char
  return priorities.foldl (·+·) 0

#eval part1
#eval part2