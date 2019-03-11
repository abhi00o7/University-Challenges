/*
ABHISHEK KUMAR
2017001069
CR CSE IBM
*/
#include <stdio.h>
#include <stdlib.h>
#include <process.h>

//global variables

// int exit();

#define MAX 5
int stack[MAX],top=-1,data;

//Stack Operation to check array status
int peek()
{
    printf(" Stack has %d elements out of %d",top+1,MAX);
    return 0;
}
//Stack Operation to POP
void PUSH(int data)
{
    if (top != MAX-1) {
        top = top + 1;   
        stack[top] = data;
    }
    else {
        printf("Error: Stack Full could not insert Data.\n\n");
    }
    
}
//Stack Operation to POP
int POP()
{
    if (top != -1) {
        data = stack[top];
        top-=1;
        return data;
    }
    else {
        printf("Error: Stack is Empty,Could not return data.");
    }
    
}
//Stack Operation to display the stack
int display()
{
    if (top != -1) {
        printf("\nView Stack");
    for(int i = top; i >= 0; i--)
    {
        printf("\n\n INDEX[%d]: %d \t ", i , stack[i]);
    }
    
    }
    else {
        printf("Nothing to display\n");
    }
    
}

//main fuction to implement all the stack operations
int main()
{
    int ch;
    while(1)
    {

        printf("\n\n\t\t**STACK**");
        printf("\n\n\tOperations:\n\n\t1->Display\n\t2->PUSH\n\t3->POP\n\t4->Peek\n\t5->exit()");
        printf("\n\nEnter Choice: ");
        scanf("%d",&ch);
            switch(ch){
            {
                case 1:
                    display();
                    break;
                case 2:
                    printf("Enter the Data to PUSH\n\tEnter Element: ");
                    scanf("%d",&data);
                    PUSH(data);
                    printf("push successful...\n");
                    break;
                case 3:
                    POP();
                    printf("pop successful...\n");
                    break;
                case 4:

                    peek();
                    break;
                case 5:
                    exit(0);

                default:
                    printf("select a number between {1,2,3,4,5}\n");
                    break;
            }
            }
}
    return 0;
}