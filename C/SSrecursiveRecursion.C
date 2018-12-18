#include<stdio.h>
int sum(int);
int main ()
{
    int num;
    num=sum(5);
    printf("%d",num);
    return 0;
}
int sum(int a)
{
    int su;
    if(a==1)
    {
        return a;
    }
     su= a*sum(a-1);
        return su;
}