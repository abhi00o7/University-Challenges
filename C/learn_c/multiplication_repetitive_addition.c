#include <stdio.h>
int main(int argc, char const *argv[]) {
    int f_num,s_num,sum=0;
    printf("Multiplication of two integers by using repetitive addition.\n" );
    printf("first Number ");
    scanf("%d", &f_num );
    printf("Second Number ");
    scanf("%d", &s_num );
    for (int i = 0; i <s_num; i++) {
        sum=sum+f_num;
    }
    printf("%d x %d = %d\n",f_num,s_num,sum );
    return 0;
}
