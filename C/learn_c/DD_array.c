#include <stdio.h>
int main() {
    /* code */
    int array[3][3],count=0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }
        /* code */
        printf("\n\nMatrix\n\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %d ",array[i][j]);//array[%d][%d]=
                //scanf("%d",&array[i][j]);
            }
            printf("\n");
        }
        printf("\n\nTranspose of the matrix\n\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %d ",array[j][i]);//array[%d][%d]=
                //scanf("%d",&array[i][j]);
            }
            printf("\n");
        }
        printf("\n\nmatrix symmetry check\n\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if(array[j][i]!=array[i][j]){
                    count++;
                }
                }
            printf("\n");
        }
        if(count==0){
            printf("symmetric\n");
        }
        else
        printf("not symmetric\n" );
    return 0;
}
