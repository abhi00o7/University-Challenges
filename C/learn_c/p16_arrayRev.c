#include <stdio.h>
int main()
{
    printf("Hello Araaray \n");
    // to enter a data in an array
    int i,length;
    printf("\nEnter the no of elemets required: ");
    scanf("%d",&length);
    int daata[length];
       for(i = 0;i < length;i++)
       {
           printf("Enter elements: ");
           scanf("%d",&daata[i]);
       }
       //to print data from the array
       printf("\n Address \t Data");
       for(i = 0;i < length;i++)
       {
           printf(" \n %u \t %d \n ",&daata[i],daata[i]);
       }
    return 0;
}
