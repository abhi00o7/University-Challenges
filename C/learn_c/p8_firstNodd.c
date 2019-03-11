#include<stdio.h>
int main(){
    //first n odd numbers 
    printf("Program to print first n odd numbers using \"while\"");
    int num,i=1,count=1;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while(count<=num){
        printf("%d \t",i);
        i+=2;
        count++;
    }
    return 0;
} 