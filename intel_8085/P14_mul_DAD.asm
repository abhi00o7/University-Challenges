;multiplication by addition
LHLD 2000
XCHG
MOV C,D
MVI D,00H
LXI H,0000
BACK:	DAD D
	DCR C
	JNZ BACK
SHLD 2003
HLT