#include <stdio.h>
int main(int argc, char const *argv[]) {
    for (int i = 0; ; i++) {
        if(i%2==0){
            printf("%d is even \n",i );
            if(i<=21){
                continue;
                break;
            }
            else
        }
    }
    return 0;
}
