#include <stdio.h>
int main() {
    /* code */
    int a[5],sum=0;
    for (int i=0;i<=4;i++){
        printf("Enter Elements");
        scanf("%d",&a[i]);
    }
    for (int i=4;i>=0;i--){
        printf("%d \t %u \n",a[i] , &a[i]);
    }
    for (int i=0;i<=4;i++){
        sum=a[i]+sum;
    }
    printf("sum= %d",sum);
    return 0;
}
