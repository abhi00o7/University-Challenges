#include <stdio.h>
int main() {
    /* code */
    int first=5,second=87,temp;
    printf("Before Execution:\n");
    printf("\nFirst number:%d",first );
    printf("\nSecond number:%d",second );
    temp=first;
    first=second;
    second=temp;
    printf("\n\nAfter Execution:\n" );
    printf("\nFirst number:%d",first );
    printf("\nSecond number:%d\n",second );

    return 0;
}
