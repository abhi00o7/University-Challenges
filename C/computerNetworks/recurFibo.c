/*
    Abhishek kumar
    making this program for Data Structures lab ;
    githubID abhi00o7
*/
#include <stdio.h>
//int fibo(int);
int fibo(int num)
{
    //first two numbers are 0 and 1
    if(num==0 || num==1)
    {
        return num;
    }
    //starting the recursion
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}
//main function for calling
int main()
{
    //initializing the variables with num and index 
    int i,num ;
    printf("Enter no : ");//number of output user wants
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        printf(" %d",fibo(i));
    }
    return 0;
}
