/*
    Abhishek kumar
    making this program for Data Structures lab ;
    githubID abhi00o7
*/

#include<stdio.h>
void main()
{
    int in,length,ch,i,key,index;
    printf("Menu Driven Functions in an array \n \n");
    printf("enter the no of elements: ");
    scanf("%d",&length);
    int a[length];
    //creating an array
    for (in=0;in<length;in++)
    {
        printf("Enter number %d: ",in+1);
        scanf("%d", &a[in]);
    }
    //printing the values of an array
    printf("\nEnterd Numbers are:\n");
    for (in=0;in<length;in++)
    {
        printf("INDEX %d: ",in+1);
        printf("%d \n" , a[in]);
    }
    //switch case functions
    printf("\t\t\t***Menu***");
    printf("\n\n1.Insert\n2.Delete\n3.Traverse\n4.Exit");
    printf("\n\nEnter your choice No: ");
    scanf("%d",&ch);
    //Switch Choices
    switch (ch)
    {
    //function to insert element in given position
        case 1:
                printf("Enter the element to insert: \n");
                scanf("%d", &key);
                printf("Enter the postiton : \n");
                scanf("%d",&index);
                length++;//increase the index value of an array

                //for shifting the values to a new position
                for(i = length;i >= index;i--)
                {
                    a[i]=a[i-1];
                }

                a[index-1] = key;//inserting the value to the user index

                //final list 
                printf("Final list is \n");
                for (i = 0; i < length; i++)
                {
                    printf("INDEX[%d]: %d\n",i+1, a[i]);
                }
                if (a[index-1]==key)
                {
                    printf("\nElement Insertion Successful.");
                }
                break;
    //function to delete an element in an array
        case 2:
            printf("The current list \n");
            //print an array

            for( i = 0; i < length; i++)
            {
                printf("INDEX[%d]: %d\n",i+1,a[i]);
            }
 
            printf("\nEnter the element to delete :");
            scanf("%d",&key);
            for(i = 0;i < length;i++)
            {
                if(key==a[i])
                {
                    for(index = i;index < length;index++)
                    {
                        a[index]=a[index+1];
                    }
                    printf("Element %d Deleted from INDEX[%d].\n\n",key,i+1);
                    break;
                }
                else
                {
                    continue;
                }
            }

            length--;//decrementing the size of an array

            printf("The Final list \n");
            //print an array

            for( i = 0; i < length; i++)
            {
                printf("INDEX[%d]: %d\n",i+1,a[i]);
            }

            break;
    //function to traverse an array
        case 3:
            //print an array]
            printf("\nAvailable list is \n\n");
            for( i = 0; i < length; i++)
            {
                printf("INDEX[%d]: %d\n",i+1,a[i]);
            }
            break;
        case 4:

            printf("Exiting...");

            break;
        default:
            printf("NOT A VALID CHOICE.\nTry restartig the program...\n");
            break;

    }

}
