#include <stdio.h>
int  main()
{
    //for printing a line of stars
    int i,j,k,length;
    printf("Enter number of lines ");
    scanf("%d",&length);
    //for printing reverse of a triangle
    //printf("\nReverse triangle of stars\n");
    //printf("Enter number of lines ");
    //scanf("%d",&length);
    for(i = length;i >=1;i--)
    {
        for(j = 0;j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //for printing a triangle of stars
    //printf("\ntriangle of stars\n");
    //printf("Enter number of lines ");
    //scanf("%d",&length);
    for(i = 0;i <= length;i++)
    {
        for(j = 0;j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for a line of stars
    for(i = 0;i < length;i++)
    {
        for(j = 0;j < length;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //a different kind of reverse triangle with spaces in the front
    //printf("\nReverse back triangle of stars\n");
    //printf("Enter number of lines ");
    //scanf("%d",&length);
    for(i = 1;i <= length;i++)
    {
        for(k = 1;k <i;k++)
        {
            printf(" ");
        }
        for(j = i;j <= length;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     //a different kind of reverse  with spaces in the front
    //printf("\nReverse front triangle of stars\n");
    //printf("Enter number of lines ");
    //scanf("%d",&length);
    for(i = 1;i <= length;i++)
    {
        for(k = i;k <length;k++)
        {
            printf(" ");
        }
        for(j = 1;j <= i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}