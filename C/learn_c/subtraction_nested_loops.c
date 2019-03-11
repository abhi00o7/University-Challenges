#include <stdio.h>
int main(int argc, char const *argv[]) {
    //creating a list
    int sub,list_a[5]={1,2.3,4,5},list_b[5]={5,4,3,2,1};
    for (int i = 0; i <=4; i++) {
        printf("list_a= %d\t list_b=%d\n",list_a[i],list_b[i] );
    }
    printf("\n\nResult of Subtraction of these two Variables\n");
    printf("\n\n Subtraction of list A from B");
    for (int i = 0; i <=4 ; i++) {
        sub=list_b[i]-list_a[i];
        printf("\n b[%d]-a[%d]= %d\n",i,i,sub );
    }
    printf("\n\n Subtraction of list B from A");

    for (int i = 0; i <=4 ; i++) {
        sub=list_a[i]-list_b[i];
        printf("\n a[%d]-b[%d]= %d\n",i,i,sub );
    }

    return 0;
}
