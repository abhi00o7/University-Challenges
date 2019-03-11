#include <stdio.h>
#include <conio.h>
int main()
{
    int n;// n is an integer
    n=10;
    int* pn;//pn is a pointer type of an integer
    pn=&n;
    *pn=*pn * *pn;
    printf("%d\n%d\n%d\n%d" ,n,*pn,pn,&n);
    return 0;
    getch();
}
