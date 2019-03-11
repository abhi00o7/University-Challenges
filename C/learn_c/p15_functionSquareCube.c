#include <stdio.h>
int square();//function declaration
int cude();//function declaration
int main()
{
    printf("program to print the squre and cube without math library");
    int nu1;
    printf("\n\nEnter number: ");
    scanf("%d",&nu1);
    printf("square of %d is %d",nu1,square(nu1));//function calling
    printf("\ncube of %d is %d",nu1,cude(nu1));//function calling
    return 0;
}

int square(int x)//function definition
{
    return (x*x);
}
int cude(int x)//function definition
{
    return (x*x*x);
}