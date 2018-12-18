#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i = 2;i < n/2;i++)
    {
        if(n%i==0)
        {
            printf("not prime\n");
            exit(0);
        }
    }
    printf("prime\n");
}