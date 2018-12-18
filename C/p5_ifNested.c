#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\nEnter numbers[eg: 12 15] : ");
    scanf("%D%D",&num1,&num2);
    //conditional operators
    (num1>num2)?printf("Largest number is %d",num1):printf("Largest value is %d",num2);
    return 0;
}