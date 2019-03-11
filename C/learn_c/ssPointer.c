#include<stdio.h>
int main()
{
    int x=5,*j;
    j=&x;
    printf("%d\t %u\n",x,j);
    printf("%d\t %u\n",*j,&x);
    printf("%u",*&j );
}