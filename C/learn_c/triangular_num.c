#include <stdio.h>
int main() {
    int i,j=1,k=1,number;
    printf("Enter Number: ");
    scanf("\n%d",&number);
    for(int i=1;i<=number;i++){
        printf("%d\n",k );
        j=j+1;
        k=k+j;
    }

    return 0;
}
