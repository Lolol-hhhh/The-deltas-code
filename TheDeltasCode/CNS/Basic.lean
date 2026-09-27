
namespace CNS

inductive Number
| O -- One
| T -- Two
| I -- thIrd
| F -- Four
| V -- fiVe
| S -- Seven
| X -- ten in roman
| H -- tHirteen
| C -- hundred in
| J -- jelta is delts evil twin 😈
| N -- any Number

inductive Operation
| P -- +
| S -- -
| M -- *
| D -- /
| C -- ^
| R -- √
| U -- ^^
| K -- ⁿ√√

inductive Term
| block (o: Operation) (n: Number)
| V (symbol: Char)
| F (symbol: Char)
| group (l: List Term)


def Number.parse
  {α: Type u} [Neg α]
  [OfNat α 1] [OfNat α 2] [OfNat α 3] [OfNat α 4] [OfNat α 5]
  [OfNat α 7] [OfNat α 10] [OfNat α 13] [OfNat α 100]
: Number → Option α
| .O => some 1
| .T => some 2
| .I => some 3
| .F => some 4
| .V => some 5
| .S => some 7
| .X => some 10
| .H => some 13
| .C => some 100
| .J => some (-1)
| .N => none

private def codesize : List Term → Nat
| [] => 0
| (.group l)::xs => (codesize l + codesize xs).succ
| (.V _)::xs => (codesize xs).succ
| (.F _)::xs => (codesize xs).succ
| (.block _ _)::xs => (codesize xs).succ

mutual
variable (α: Type u) [Add α] [Sub α] [Mul α] [Div α] [Neg α] [Pow α α] [OfNat α 1] [OfNat α 2] [OfNat α 3] [OfNat α 4] [OfNat α 5]  [OfNat α 7] [OfNat α 10] [OfNat α 13] [OfNat α 100] [OfNat α 0]

def parseAux (c: List Term) (acc: α) (assignments: Char → Option α := fun _ => none) (functions: Char → Option (List Term) := fun _ => none) (stack: Nat := 1000) : Option α := match stack with | 0 => none | stac+1 => match c with
| [] => some acc
| (.group l)::xs => do parseAux xs (← parse2 l assignments functions (stac+1)) assignments functions (stac+1)
| (.V x)::xs => match assignments x with
  | some y => parseAux xs (acc*y) assignments functions (stac+1)
  | none => none
| (.F x)::xs => match functions x with
  | some y => parse2 y (fun x => if x = 'L' then acc else if x = 'R' then parse2 xs assignments functions (stac+1) else assignments x) functions stac
  | none => none
| (.block x y)::xs => match y.parse (α := α) with
  | none => match x with
    | .P => do acc + (← parse2 xs assignments functions (stac+1))
    | .S => do acc - (← parse2 xs assignments functions (stac+1))
    | .M => do acc * (← parse2 xs assignments functions (stac+1))
    | .D => do acc / (← parse2 xs assignments functions (stac+1))
    | .C => do let e ← parse2 xs assignments functions (stac+1); return acc ^ e
    | .R => do let e ← parse2 xs assignments functions (stac+1); return acc ^ (1/e)
    | .U => none
    | .K => none
  | some y => match x with
    | .P => parseAux xs (acc+y) assignments functions (stac+1)
    | .S => parseAux xs (acc-y) assignments functions (stac+1)
    | .M => parseAux xs (acc*y) assignments functions (stac+1)
    | .D => parseAux xs (acc/y) assignments functions (stac+1)
    | .C => parseAux xs (acc^y) assignments functions (stac+1)
    | .R => parseAux xs (acc^(1/y)) assignments functions (stac+1)
    | .U => none
    | .K => none

def parse2 (c: List Term) (assignments: Char → Option α := fun _ => none) (functions: Char → Option (List Term) := fun _ => none) (stack: Nat := 1000) : Option α := let acc := (match c with
| (.V _)::_ => 1
| (.block .M _)::_ => 1
| (.block .D _)::_ => 1
| _ => 0
); parseAux c acc assignments functions stack

end

partial def parse (α: Type u) [Add α] [Sub α] [Mul α] [Div α] [Neg α] [Pow α α] [OfNat α 1] [OfNat α 2] [OfNat α 3] [OfNat α 4] [OfNat α 5] [OfNat α 7] [OfNat α 10] [OfNat α 13] [OfNat α 100] [OfNat α 0] (c: List Term) (functions: Char → Option (List Term) := fun _ => none) (stack: Nat := 1000) : Option α := parse2 α c (fun _ => none) functions stack

def quadratic.discriminant : List Term := [
  .V 'B',
  .block .C .T,
  .block .S .N,
  .V 'A',
  .V 'C',
  .block .M .F
]

def quadratic : List Term := [
  .group [
    .V 'B',
    .block .M .J,
    .block .P .N,
    .group quadratic.discriminant,
    .block .R .T
  ],
  .block .D .N,
  .V 'A',
  .block .M .T
]

#eval parseAux Float [.block .C .J] 1.0 -- 1^(-1)=1
#eval parseAux Float [.block .C .J] 2.0 -- 2^(-1)=0.5
#eval parse Float [.block .C .J] -- 0^(-1)=inf
#eval parse Float [.block .P .C,.block .S .N,.group [.block .P .C,.block .P .T],.block .R .T] -- 100 - √(100+2) ≈ 89.9
#eval parse2 Float quadratic (fun | 'A' => some 1 | 'B' => some (-1) | 'C' => some (-1) | _ => none) -- x^2-x-1=0 → x≈1.618

/-
```cns
1 | FA = VLMVMNVR
2 | FB = [VLFAVR]MV
3 | PTFBPH
```
-/
#eval parse Float [.block .P .T,.F 'B',.block .P .H] (fun
| 'A' => some [.V 'L',.block .M .V,.block .M .N,.V 'R']
| 'B' => some [.group [.V 'L',.F 'A',.V 'R'],.block .M .V]
| _ => none
)

/-
```cns
1 | FC = VLMV
2 | FD = VRMV
3 | [FDPT]FC
```
-/
#eval parse Float [.group [.F 'D',.block .P .T],.F 'C'] (fun
| 'C' => some [.V 'L',.block .M .V]
| 'D' => some [.V 'R',.block .M .V]
| _ => none
)

end CNS
