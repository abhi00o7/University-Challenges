#include <stdio.h>
int main() {
    int fact;
    long int f=1;
    printf("Program to find the factorial of a given number.\n");
    printf("Enter Number: ");
    scanf("%ld",&fact );
    if (fact==1 || fact==0) {
        printf("\nfactorial is %ld \n",1);    /* code */
    }
    else{
        for(int i=1;i<=fact;i++){
            f=f*i; //the number is multiplying itself again and again with increment
        }
    printf("\nfactorial is %ld \n",f);
    }
    return 0;
}
