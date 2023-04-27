import Std.Data.List.Basic
import Mathlib.Data.String.Basic

-- Day 1 -----------------------------------------------------------------------------------------------
namespace Day1

def test: String :=

"1000
2000
3000

4000

5000
6000

7000
8000
9000

10000"

#eval test

def elves (s : String): List String := 
    s.splitOn "\n\n"

#eval elves test

def calories (s: String) : List Nat :=
    let l' := s.splitOn "\n"
    l'.map (fun s => s.toNat!)

#eval (elves test).map calories

def addUp (l : List Nat) : Nat := 
    l.foldl (. + .) 0 

#eval addUp [1, 2, 3, 4, 5]
#eval (elves test).map calories

def totalCallist (s : String) : List Nat :=
    let t := elves s
    let l' := t.map calories
    l'.map addUp

#eval totalCallist test

def answer (s: String) : Nat := 
    totalCallist s|>.foldl max 0

#eval answer test

#check IO.FS.readFile

#print System.FilePath 

def path := System.FilePath.mk "/Users/ellismclarty/Documents/2022-23/Spring_2023/SCHC411/elf_input.txt"

def contents : IO Unit := do
    let file ← IO.FS.readFile path
    IO.println file
    let newFile := String.join ["hi", file]
    IO.println newFile
    return ()

#print Option

end Day1

-- Day 2 -----------------------------------------------------------------------------------------------
def path : System.FilePath := System.mkFilePath ["input2"]
/-#eval IO.FS.readFile path-/
namespace Day2

#eval path

def main : IO Unit :=
 let s := IO.FS.readFile path
 return ()

inductive Play where
  |Rock
  |Paper
  |Scissors

deriving Repr
open Play

def Play.name : Play → String
| Rock => "Rock"
| Paper => "Paper"
| Scissors => "Scissors"

#eval Play.name Rock

def value (play : Play) : Nat := 
  match play with
  | .Rock => 1
  | .Paper => 2
  | .Scissors => 3

#eval value Paper

def testGame : String :=
  "A Y
B X
C Z"

#eval testGame

def round (s : String) : List String := s.splitOn "\n"

#eval round testGame

def score (opp you : Play) : Nat := 
  match opp, you with
  | .Rock, .Rock => 4
  | .Rock, .Paper => 8
  | .Rock, .Scissors => 3
  | .Paper, .Rock => 1
  | .Paper, .Paper => 5
  | .Paper, .Scissors => 9
  | .Scissors, .Rock => 7
  | .Scissors, .Paper => 2
  | .Scissors, .Scissors => 6

def playxPlay (s : String) : (Play × Play) := 
  match s with
  | "A X" => (Rock, Rock)
  | "A Y" => (Rock, Paper)
  | "A Z" => (Rock, Scissors)
  | "B X" => (Paper, Rock)
  | "B Y" => (Paper, Paper)
  | "B Z" => (Paper, Scissors)
  | "C X" => (Scissors, Rock)
  | "C Y" => (Scissors, Paper)
  | "C Z" => (Scissors, Scissors)
  | _ => (Rock, Rock)

#eval (round testGame).map playxPlay

#eval (((round testGame).map playxPlay).map fun x => score x.1 x.2).foldl (·+·) 0

def path := System.FilePath.mk "input/day2.txt"

#check IO.FS.readFile path

#print System.FilePath

def contents : IO Unit := do
  let file ← IO.FS.readFile path
 -- IO.println file
  let overallScore := (((round file).map playxPlay).map fun x => score x.1 x.2).foldl (·+·) 0
  IO.println overallScore

#print Option
#eval contents

-- Day 3 -----------------------------------------------------------------------------------------------
-- Input Paths / Constants ----------------------------------
def lineBreak : String := 
  if System.Platform.isWindows then "\n0d\n" else "\n"

namespace day3

def day3_inputpath := System.FilePath.mk "/home/shash/School/2022—2023/SCHC411/AdventOfCode/input/day3.txt"

-- Function Definitions -------------------------------------
def break_input (s : String) : List Char × List Char :=
  let string_list := s.data
  (string_list.take (string_list.length/2), string_list.drop (string_list.length/2))

def match_char (s : String) : Nat :=
  match s with
  | "a" => 1
  | "b" => 2
  | "c" => 3
  | "d" => 4
  | "e" => 5 
  | "f" => 6
  | "g" => 7
  | "h" => 8
  | "i" => 9
  | "j" => 10
  | "k" => 11
  | "l" => 12
  | "m" => 13
  | "n" => 14
  | "o" => 15
  | "p" => 16
  | "q" => 17
  | "r" => 18
  | "s" => 19
  | "t" => 20
  | "u" => 21
  | "v" => 22
  | "w" => 23
  | "x" => 24
  | "y" => 25
  | "z" => 26
  | "A" => 27
  | "B" => 28
  | "C" => 29
  | "D" => 30
  | "E" => 31
  | "F" => 32
  | "G" => 33
  | "H" => 34
  | "I" => 35
  | "J" => 36
  | "K" => 37
  | "L" => 38
  | "M" => 39
  | "N" => 40
  | "O" => 41
  | "P" => 42
  | "Q" => 43
  | "R" => 44
  | "S" => 45
  | "T" => 46
  | "U" => 47
  | "V" => 48
  | "W" => 49
  | "X" => 50
  | "Y" => 51
  | "Z" => 52
  | _ => 0

-- Answer Function ------------------------------------------
-- Day 3 | Question 1
def day3_question1 : IO Nat := do
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

#eval day3_question1