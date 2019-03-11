#include<stdio.h>
void main()
{
    //bubble sort program
    //creating an array with user input
    int length,i,j,temp,c;
    printf("Bubble sorting in an array \n \n");
    printf("enter the no of elements: ");
    scanf("%d",&length);
    int a[length];
    //creating an array
    for (i=0;i<length;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]); 
    }
    //bubble sort
    for(i = 0;i <=length;i++)
    {
        for(j = 0;j < length-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    //printing the value of an array
    printf("1.Ascending \n 2.Decending\n ");
    scanf("%d",&c);
    if(c=1)
    {
    printf("\nSorted array in ascending:\n");
    for (i=0;i<length;i++)
    {
        //printf("number %d: ",i+1);
        printf("%d \t" , a[i]); 
    }
    }
    if(c=2)
    {
    printf("\nSorted array in descending:\n");

        for (i=length;i<0;i--)
    {
        //printf("number %d: ",i+1);
        printf("%d \t" , a[i]); 
    }
    }
}