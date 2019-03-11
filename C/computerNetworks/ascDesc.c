#include <stdio.h>
//finding the maximum and minimum in an array
void main()
{
    //creating an array with user input
    int n,i,max,min,temp;
    printf("finding the max and min in an array \n \n");
    printf("enter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    //creating an array
    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]); 
    }
    //printing the values of an array
    printf("\nEnterd Numbers are:\n");
    for (i=0;i<n;i++)
    {
        printf("number %d: ",i+1);
        printf("%d \n" , a[i]); 
    }
    //finding the maximum in an array
    max=a[0];
    for (i=0;i<n;i++)
    {
        if(max<a[i])
        {
            //swap the number with max
            max=a[i];
            continue;
        }
        else
        {
            continue;
        }
    }
    printf("maximum value = %d",max);
    //finding the minimum in an array
    min=a[0];
    for (i=0;i<n;i++)
    {
        if(min>a[i])
        {
            //swap the number with max
            min=a[i];
            continue;
        }
        else
        {
            continue;
        }
    }
    printf("\nminimum value = %d",min);
}