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