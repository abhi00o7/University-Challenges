;PROGRAM TO ADD TWO NUMBERS WITH CARRY USING MEMORY POINTER
MVI C,00H
LXI H,2000
MOV A,M
INX H
ADD M
JNC SKIP
INR C
SKIP: 	INX H
MOV M,A
INX H 
MOV M,C
HLT
