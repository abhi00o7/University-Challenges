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
int Queue[MAX],rear=-1,data;

//Queue Operation to check array status
int peek()
{
    printf(" Queue has %d elements out of %d",rear+1,MAX);
    return 0;
}
//Queue Operation to POP
void PUSH(int data)
{
    if (rear != MAX-1) {
        rear = rear + 1;   
        Queue[rear] = data;
    }
    else {
        printf("Error: Queue Full could not insert Data.\n\n");
    }
    
}
//Queue Operation to POP
int POP()
{
    if (rear != -1)
    {

        data = Queue[0];
        printf("\n %d",data);
        for(int i = 0; i <= rear; i++)
        {
            Queue[i]= Queue[i+1];

        }
        
        rear-=1;
        return data;
    }
    else {
        printf("Error: Queue is Empty,Could not return data.");
    }
    
}
//Queue Operation to display the Queue
int display()
{
    if (rear != -1) {
        printf("\nView Queue");
    for(int i = rear; i >= 0; i--)
    {
        printf("\n\n INDEX[%d]: %d \t ", i , Queue[i]);
    }
    
    }
    else {
        printf("Nothing to display\n");
    }
    
}

//main fuction to implement all the Queue operations
int main()
{
    int ch;
    while(1)
    {

        printf("\n\n\t\t**Queue**");
        printf("\n\n\tOperations:\n\n\t1->Display\n\t2->Insert\n\t3->Delete\n\t4->Peek\n\t5->exit()");
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
                    printf("Insert Operation successful...\n");
                    break;

                case 3:
                    POP();
                    printf("Delete Operation successful...\n");
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