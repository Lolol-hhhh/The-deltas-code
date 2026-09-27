
namespace Ecilueuan

inductive Vowel
| a | e | i | o | u

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
| ⟨.N,.e,[]⟩ => "boy"
| ⟨.N,.e,[v]⟩ => match v with
  | .a => none
  | .e => "cousin"
  | .i => none
  | .o => none
  | .u => none
| ⟨.N,.i,_⟩ => "genderless"
| ⟨.N,.o,_⟩ => "nonbinary"
| ⟨.N,.u,_⟩ => "object"

| ⟨.K,_,_⟩ => "im a lil lazy to put the CNS in :durr:"

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
| ⟨.H,.o,[]⟩ => none
| ⟨.H,.u,[]⟩ => "up"
| ⟨.H,.u,[.a]⟩ => "down"

| ⟨.A,.e,[]⟩ => "to like"
| ⟨.A,.i,[]⟩ => "and"
| ⟨.A,.u,[]⟩ => "is"

| ⟨.S,.a,[]⟩ => "know"
| ⟨.S,.e,[]⟩ => "think"
| ⟨.S,.i,[]⟩ => none
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

#eval List.map Token.translate [⟨.N,.a,[.o]⟩,⟨.N,.e,[]⟩]
end Ecilueuan
