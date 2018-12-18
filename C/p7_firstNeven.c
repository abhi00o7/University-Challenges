#include<stdio.h>
int main(){
    //first n even numbers 
    printf("Program to print first n even numbers using \"while\"");
    int num,i=2,count=1;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while(count<=num){
        printf("%d \t",i);
        i+=2;
        count++;
    }
    return 0;
} 