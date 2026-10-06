
namespace Ecilueuan

inductive Vowel
| a | e | i | o | u
| r -- this just here for kr

inductive Group
| N | K | T | Z | H | A | S | W | J

structure Token where
(group: Group)
(vowel: Vowel)
(extraVowels: List Vowel := [])

def Token.translate : Token → Option String
| ⟨.N,.a,[]⟩ => "girl"
| ⟨.N,.a,[v]⟩ => match v with
  | .a => "partner"
  | .e => "sibling"
  | .i => "unrelated"
  | .o => "child"
  | .u => "parent"
  | .r => none
| ⟨.N,.e,[]⟩ => "boy"
| ⟨.N,.e,[v]⟩ => match v with
  | .a => "friend"
  | .e => "cousin"
  | .i => "deceased/missing person"
  | .o => "imaginary person"
  | .u => none
  | .r => none
| ⟨.N,.i,_⟩ => "genderless"
| ⟨.N,.o,_⟩ => "nonbinary"
| ⟨.N,.u,_⟩ => "object"

| ⟨.K,op,num⟩ => do
  let operation := match op with
  | .a => "+"
  | .i => "-"
  | .r => "x"
  | .o => "/"
  | .e => "^"
  | .u => "√"
  let number ← match num with
  | [.o] => "1"
  | [.e] => "2"
  | [.i] => "3"
  | [.e,.e] => "4"
  | [.u] => "5"
  | [.o,.o] => "7"
  | [.a] => "10"
  | [.i,.i] => "13"
  | [.a,.a] => "100"
  | [] => "n"
  | [.u,.u] => "?"
  | _ => none
  some (operation ++ number)

| ⟨.T,.a,[]⟩ => "yes/true"
| ⟨.T,.e,[]⟩ => "probably"
| ⟨.T,.i,[]⟩ => "maybe"
| ⟨.T,.o,[]⟩ => "probably not"
| ⟨.T,.u,[]⟩ => "no/not"

| ⟨.Z,.a,[]⟩ => "my"
| ⟨.Z,.e,[]⟩ => "I"
| ⟨.Z,.i,[]⟩ => none
| ⟨.Z,.o,[]⟩ => "you"
| ⟨.Z,.u,[]⟩ => "good"

| ⟨.H,.a,[]⟩ => "place"
| ⟨.H,.e,[]⟩ => "forward"
| ⟨.H,.e,[.a]⟩ => "backward"
| ⟨.H,.i,[]⟩ => "left"
| ⟨.H,.i,[.a]⟩ => "right"
| ⟨.H,.o,[]⟩ => "inside"
| ⟨.H,.o,[.a]⟩ => "outside"
| ⟨.H,.u,[]⟩ => "up"
| ⟨.H,.u,[.a]⟩ => "down"

| ⟨.A,.e,[]⟩ => "like"
| ⟨.A,.i,[]⟩ => "and"
| ⟨.A,.o,[]⟩ => "do"
| ⟨.A,.u,[]⟩ => "is"

| ⟨.S,.a,[]⟩ => "know"
| ⟨.S,.e,[]⟩ => "think"
| ⟨.S,.i,[]⟩ => "say"
| ⟨.S,.o,[]⟩ => "this"
| ⟨.S,.u,[]⟩ => "have"

| ⟨.W,.a,[]⟩ => "what"
| ⟨.W,.e,[]⟩ => "where"
| ⟨.W,.i,[]⟩ => "why"
| ⟨.W,.o,[]⟩ => "when"
| ⟨.W,.u,[]⟩ => "who"

| ⟨.J,.a,[]⟩ => none
| ⟨.J,.e,[]⟩ => none
| ⟨.J,.i,[]⟩ => none
| ⟨.J,.o,[]⟩ => none
| ⟨.J,.u,[]⟩ => none

| _ => none

def tokenize (s: String) : Option (List Token) := do
  let mut str := s.toList
  let mut out: List Token := []
  while h: str.length > 2 do
    let g: Char := str.head (List.ne_nil_of_length_pos (Nat.lt_trans (by decide) h))
    str := str.tail
    let v: Char := str.head (List.ne_nil_of_length_pos (Nat.lt_trans (by decide: 0 < 1) (by unfold str; rw [(by rfl: 1=2-1),List.length_tail])))
    let group: Group ← match g.toLower with
    | 'n' => some .N
    | 'k' => some .K
    | 't' => some .T
    | 'z' => some .Z
    | 'h' => some .H
    | 'a' => some .A
    | 's' => some .S
    | 'w' => some .W
    | 'j' => some .J
    | _ => none



#eval List.map Token.translate [⟨.Z,.a,[]⟩,⟨.Z,.o,[]⟩,⟨.A,.e,[]⟩,⟨.A,.e,[]⟩,⟨.K,.e,[.a]⟩]
end Ecilueuan
