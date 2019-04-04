#include <stdio.h>

int main (){

    int x = 7;
    printf("x is %d \n",x);

    x = 14;
    printf("x is %d \n",x);  
    
    int *ptr = &x;
    printf("pointer is %x \n",ptr);

    printf("x is %d\n", *ptr);  

    *ptr = 21;
    printf("x is %d\n", *ptr);  
}