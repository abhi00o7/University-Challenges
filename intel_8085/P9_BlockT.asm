;BLOCK TRANSFER PROGRAM 
LXI H,2000;SOURCE
LXI D,2020;DESTINATION
MVI B,0AH;COUNT
BACK:	MOV A,M
	STAX D
	INX H
	INX D
	DCR B
	JNZ BACK
HLT