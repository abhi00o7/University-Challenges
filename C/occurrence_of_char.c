#include <stdio.h>
int main() {
    int count=0;
    char search[10],for_search;
    for (int i=0;i<=9;i++){
        printf("Enter String : ");
        scanf("%s",&search[i]);
    }
    printf("\n\nElement to search:");
    scanf("%s\n",&for_search );
    for (int i = 0; i <=9; i++) {
        if(search[i]==for_search){
            count=count+1;
        }
        printf("Number of repeated char is %d times. \n",count );
    }
    return 0;
}
