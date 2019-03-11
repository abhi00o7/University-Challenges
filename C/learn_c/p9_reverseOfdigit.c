#include<stdio.h>
int main()
{
    //program to check for palindrome of a number and also find the sum of the digits 
    //program to print the number in reverse
    //for the reverse 
    printf("Using number to print the reverse of a number\n");
    int num,digit,rev,count=0;
    printf("Enter number : ");
    scanf("%d",&num);
    digit=num;
    while(num>0){
        rev=num%10;
        printf("%d",rev);
        num=num/10;
    }
    // for the sum of digits in the same program
    printf("\nsum of digits");
    while(digit>0){
        rev=digit%10;
        count=count+rev;
        digit=digit/10;
    }
    printf("Sum of digits are : %d",count);
    return 0;
}