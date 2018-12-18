lxi h,2000
mvi b,0ah
inx h
mov a,m
dcr b
loop:	inx h
	cmp m
	jnc ahed
	mov a,m
ahed:	dcr b
	jnz loop
	sta 2030
hlt