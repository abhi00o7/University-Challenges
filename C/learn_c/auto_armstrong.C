#include <stdio.h>
int main() {
    printf("To check if ARMSTROMG (100-999)\n" );
    int n,num,su=0,digit;
    printf("Enter Number: ");
    scanf("%d", &num );
    n=num;
    for(int i=100;i<=999;i++){
        while (n>0) {
            digit=n%10;
            su=su+digit*digit*digit;
            n=n/10;
        }mm
           if (num==su) {
               printf("Numer is armstrong\n");/* code */
           }
           else{
               printf("Numer is not armstrong\n");
           }
    }
    return 0;
}
