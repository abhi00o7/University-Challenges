;PROGRAM TO ADD TWO NUMBERS WITH CARRY USING MEMORY POINTER
MVI C,00H
LXI H 2000H
MOV A,M
INX H
ADD A
JNC SKIP:
INR C
SKIP: INX H
MOV M,A
INX H 
MOV M,C
HLT