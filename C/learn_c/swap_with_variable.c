#include <stdio.h>
int main() {
    int fn,sn,tm;
    printf("Program to swap two numbers with a tempo value");
    printf("\n\nEnter first number before swapping  ");
    scanf("%d",&fn );
    printf("\nSecond number before swapping ");
    scanf("%d",&sn );
    tm=fn;
    fn=sn;
    sn=tm;
    printf("\n\nAfter swapping");
    printf("\n\nfirst number= %d",fn );
    printf("\nSecond number= %d\n",sn );
    return 0;
}
