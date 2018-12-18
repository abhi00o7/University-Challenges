#include<stdio.h>
int  main()
{
    //program to print the factorial of a number 
    int fact=1,num,n;
    printf("factorial : ");
    scanf("%d",&n);
    for(num = 1;num <= n;num++)
    {
        fact=fact*num;
    }
    printf("\nFactorial of a number is: %d",fact);
    return 0;
}