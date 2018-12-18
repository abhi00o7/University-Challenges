#include<stdio.h>
int main(){
    //to print fibonacci series
    int pre=0,cur=1,i,sum,fibo,temp;
    printf("\nEnter number: ");
    scanf("%d",sum);
    printf("%d \t %d",pre,cur);
    for(i = 3;i <= sum;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\t%d",cur);
    }
    return 0;
}