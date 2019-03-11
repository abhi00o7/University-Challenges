#include<stdio.h>
void swapByValue(int,int);
void swapByRefrence(int*,int*);
int main (){
    int num1=20,num2=10;
    swapByValue(num1,num2);
    printf("n1=%d \tn2=%d",num1,num2);
    swapByRefrence(&num1,&num2);
    printf("n1=%d \tn2=%d",num1,num2);
}
void swapByRefrence(int* a,int* b){
    int t;
    t=*a;
    *b=*a;
    *a=t;
}
void swapByValue(int a,int b){
    int t;
    t=b;
    b=a;
    a=t;
}

// void swapByValue(int, int); /* Prototype */
 
// int main() /* Main function */
// {
//   int n1 = 10, n2 = 20;
 
//   /* actual arguments will be as it is */
//   swapByValue(n1, n2);
//   printf("n1: %d, n2: %d\n", n1, n2);
// }
 
// void swapByValue(int a, int b)
// {
//   int t;
//   t = a; a = b; b = t;
// }