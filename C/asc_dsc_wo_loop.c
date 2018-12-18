#include <stdio.h>
int main(int argc, char const *argv[]) {
    //initializing all the required variables
    int number[10],temp;
    //entering the data in the array for sorting
    for (int i = 0; i < 10; i++) {
        printf("Enter Numer %d : ",i+1 ); //added one to make more user friendly
        scanf("%d",&number[i] );
    }
    //to short the list elements using bubble sort
    for(int i=0;i<10;i++){
        for (int j = 0; j < 10; j++) {
            if (number[j]>number[i]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
    //for Ascending
    printf("\n\n Ascending : " );
    for (int i = 0; i < 10; i++) {
        printf(" %d ",number[i]);
    }
    //for Descending
    printf("\n\n Descending : " );
    for (int i = 9; i >= 0; i--) {
        printf(" %d ",number[i]);
    }
    return 0;
}