#include <stdio.h>
int main() {
    int num;
    printf("\n\nConditional Operators\n\nEnter a Number ");
    scanf("%d",&num);
    
    if (num%2==0) {
       printf("Number is even"); /* code */
    }
    else
    {
            printf("Number is odd");
    }
    //printf("")
    
    return 0;
}