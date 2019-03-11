#include <stdio.h>
int main() {
    for (int i = 7; i < 101; i++) {
        if(i%4==0){
                    printf("initiated Level 2 in progress...\n" );
            if(i%5==4 && i%6==4){
                printf("%d is the number that is exactly divisible by 4 and leaves remainder 4 when divided by 5 & 6 \n",i );
            }
            /*else
            printf("not found!\n" );*/
        }
        else
        printf("initiated Level 1 in progress...\n" );
    }
    return 0;
}
