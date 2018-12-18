#include <stdio.h>
int main() {
    //fun with loops
    for (int i = 0; i < 4; i++) {//initializing first loop
        printf("This is the start of loop 1.\n" );
        for (int i = 0; i < 3; i++) {//initializing Second loop
            printf("This is the start of loop 2.\n" );
            for (int i = 0; i < 2; i++) {//initializing Third loop
                printf("This is the start of loop 3.\n" );
                for (int i = 0; i < 1; i++) {//initializing forth loop
                    printf("This is the start of loop 4.\n" );
                }
                printf("This is the end of loop 4.\n" );
            }
            printf("This is the end of loop 3.\n" );
        }
        printf("This is the end of loop 2.\n" );
    }
    printf("This is the end of loop 1.\n" );
    return 0;
}
