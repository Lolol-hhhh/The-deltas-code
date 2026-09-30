
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
  | .a => none
  | .e => "sibling"
  | .i => none
  | .o => "child"
  | .u => "parent"
  | .r => none
| ⟨.N,.e,[]⟩ => "boy"
| ⟨.N,.e,[v]⟩ => match v with
  | .a => none
  | .e => "cousin"
  | .i => none
  | .o => none
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

| ⟨.A,.e,[]⟩ => "to like"
| ⟨.A,.i,[]⟩ => "and"
| ⟨.A,.u,[]⟩ => "is"

| ⟨.S,.a,[]⟩ => "know"
| ⟨.S,.e,[]⟩ => "think"
| ⟨.S,.i,[]⟩ => "say"
| ⟨.S,.o,[]⟩ => none
| ⟨.S,.u,[]⟩ => none

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

#eval List.map Token.translate [⟨.Z,.a,[]⟩,⟨.Z,.o,[]⟩,⟨.A,.e,[]⟩,⟨.A,.e,[]⟩,⟨.K,.e,[.a]⟩]
end Ecilueuan
