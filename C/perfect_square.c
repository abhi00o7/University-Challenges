#include <stdio.h>
int main(int argc, char const *argv[]) {
    int p_square;
    printf("Perfect Square numbers between 1 to 500\n");
    for (int i = 0; i < 501; i++) {
        p_square=i*i;
        if(p_square<=500){
            printf("%d is square of %d\n",p_square,i);
        }
    }
    return 0;
}
