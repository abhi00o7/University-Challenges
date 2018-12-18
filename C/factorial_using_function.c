#include<stdio.h>
//function creation
long factorial(int n){
    //int i;
    long result = 1;
    for (int i = 1; i <= n; i++)
    result = result * i;
    return result;
}
long factorial(int);//function declaration
int main(){
  int number;
  long fact = 1;
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &number);
  printf("%d! = %ld\n", number, factorial(number));//function calling
  return 0;
}
