// double linked list to insert at the begining and 

#include <stdio.h>
#include <stdlib.h>
#include <process.h>

void insert_begin();
void delete_last();
void traverse();
void create();

struct node
{
    struct node *prev;
    int double_link;
    struct node *next;
}*h,*aage,*piche,*aage_2;

int count = 0;

void main(){

    printf("\n\n\t***   Double Linked List Operations   ***");
    printf("\nChoose Operations :\n1.Insert at begining\n2.Delete from Last\n3.Traverse\n4.exit()");

    int choice;
    char q;
    printf("\n\n\t\tEnterChoice:");
    scanf("%d",&choice);

    while(1){

        switch (choice)
        {
            case 1:
                printf("Insert ?('y' or 'n')");
                scanf("%c",&q);
                if(q == 'y' || q == 'Y'){
                    insert_begin();
                }
                else //if((q == 'n') || (q == 'N'))
                {
                    exit(0);
                }
                break;
            case 2:
                delete_last();
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n\n**Choice not available please choose one from 1-4**\n");
                break;
        }
    }

}

void create()
{
    int data;
 
    aage =(struct node *)malloc(1*sizeof(struct node));
    aage->prev = NULL;
    aage->next = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    aage->double_link = data;
    count++;
}

// Insert at the begining
void insert_begin(){
    if (h == NULL)
    {
        create();
        h = aage;
        piche = h;
    }
    else
    {
        create();
        aage->next = h;
        h->prev = aage;
        h = aage;
    }
}

// traaverse
void traverse(){
    aage_2 = h;
 
    if (aage_2 == NULL)
    {
        printf("List empty to display \n");
        exit(0);
        return;
    }
    printf("\n Linked list elements from begining : ");
 
    while (aage_2->next != NULL)
    {
        printf(" %d ", aage_2->double_link);
        aage_2 = aage_2->next;
    }
    printf(" %d ", aage_2->double_link);
}

// delete from last
void delete_last(){

}