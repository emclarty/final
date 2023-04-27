def elves (s : String): List String := 
    s.splitOn "\n\n"

def calories (s: String) : List Nat :=
    let l' := s.splitOn "\n"
    l'.map (fun s => s.toNat!)

def addUp (l : List Nat) : Nat := 
    l.foldl (. + .) 0 

def totalCallist (s : String) : List Nat :=
    let t := elves s
    let l' := t.map calories
    l'.map addUp

def answer (s: String) : Nat := 
    totalCallist s|>.foldl max 0

def path := System.FilePath.mk "input/day1.txt"

def contents : IO Unit := do
    let file ← IO.FS.readFile path
    IO.println file
    let newFile := String.join ["hi", file]
    IO.println newFile
    return ()

def part1 : IO Unit := do
    let file ← IO.FS.readFile path
    -- IO.println file.data.getLast!
    IO.println (answer file)
    return ()

def part2: IO Unit := do
    let file ← IO.FS.readFile path
    let nat_list := totalCallist file
    let arr := List.toArray nat_list
    let sorted_arr := Array.qsort arr fun m n => n <= m
    let sorted_list := Array.toList sorted_arr
    let top_3 := sorted_list.take 3
    IO.println (top_3.foldl (·+·) 0)
    return ()

#eval part1
#eval part2