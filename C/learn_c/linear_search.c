#include <stdio.h>
int main() {
    printf("Program to search :");
    printf("\n===================");
    int array[3],num,i;
        for (int j = 0; j < 3; j++) {
            printf("\narray[%d]=",j+1);
            scanf("%d",&array[j]);
        }
    printf("\nEnter the number:" );//to enter the number to search
    scanf("%d", &num);
    //linear search
    for(i=0;i<3;i++){
        if (array[i]==num) {
        printf("\nNumber FOUND at array[%d]",i+1);
        printf("\n");
        break;
    }
    // else{
    //         printf("\nNumber NOT FOUND at array[%d]",i);
    //         printf("\n");
    // }
    }
    //printf("%d",i );
    if (i==3) {
             printf("\nNumber NOT FOUND");
             printf("\n");
    }
    return 0;
}
