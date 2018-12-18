jmp start

;declaring the variables: fat, i, n; 
v_fat: ds 1;
v_i: ds 1;
v_n: ds 1;
;end of declaration;

start: nop; beginning of the program;
	
	mvi a, 05h; n <= 5 (registry A);	
	sta v_n; variable v_n stores the value recorder A;

call void_fatiter; call the method void_fatiter;

void_fatiter: nop; method fatiter{
	
	mvi a, 01h; fat <= 1 (recorder A);	
	sta v_fat; variable v_fat stores the value recorder A;

;begin do if(n>0){ 
	
   	lda v_n; loads the value of the variable v_n to the recorder A;	
	mov b, a; moves the value of the register A to the recorder B;	
	mvi a, 00h; clears the register A;	
	cmp b; compares the value of register B with the recorder A;	
	jnz fim_if; jumps to function end_if if it is not zero (if the value isem B for = 0);

fim_if: jnc return_fat; call the function return_fat case o if is not made;

inicio_for: nop; beginning for(i = 1; i <= n; i++){

	mvi a, 01h; i <= 1 (Recorder A);
	sta v_i; variable v_i stores the value recorder A;

r1:	nop; rotina 1;
	mov c, a; moves the value of the register A to the recorder C;
	lda v_n; loads the value of the variable v_n to the recorder A;
	cmp c; compares the value of register C with recorder A;
	jc r4; jumps to routine 4 se der carry;

r4: 	call multi; routine 4; call the function multi;

r3:	lda v_i; rotina 3; loads the value of the variable v_i to the recorder A;
	inr a; increment the value of the recorder A;
	sta v_i; variable v_i stores the value recorder A;
	jmp r1; jumps to routine 1;

r2:	call return_fat; routine 2; call the function return_fat;

multi:  nop; função multi;
	lda v_fat; loads the value of the variable v_fat to the recorder A;
	mov b, a; moves the value of the register A to the recorder B;
	lda v_i; carrega o valor da variavel v_i to the recorder A;
	mov d, a; loads the value of the recorder A to the recorder D;
	mov e, a; moves the value of the register A to the recorder E;
	cmp b; compares the value of the recorder B with the recorder A;
	jz r3; jumps to routine 3 if it is not zero;
	dcr d; decrements the value of the recorder D;
	lda v_fat; loads the value of the variable v_fat to the recorder A;

r5:	add b; rotina 5; soma o valor do registrador A com o valor do registrador B;
	dcr d; decrementa o valor do registrador D;
	jnz r5; pula para rotina 5 se não der zero;
	sta v_fat; variable v_fat stores the value recorder A;
	lda v_n; loads the value of the recorder v_n to the recorder A;
	cmp e; compares the value of the recorder E with the recorder A;
	jz r2; jumps to routine 2 se der zero;
	ret; return to calling multi;

;end for }
;end if }

return_fat: nop; function return_fat;

	lda v_fat; loads the value of the variable v_fat para o registrador A;

hlt; end;