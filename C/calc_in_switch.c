#include <stdio.h>
int main() {
    int f_num,choice,s_num,add,sub,mul,divi;
    printf("enter_first_number\n");
    scanf("%d",&f_num);
    printf("enter_second_number");
    scanf("%d",&s_num);
    printf("Choose the number for Operation\n");
    printf("1.addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("Enter your Choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: add=f_num+s_num;
                printf("Sum of given numbers is %d",add );
                break;
        case 2: sub=f_num-s_num;
                printf("Subtraction of two numbers is%d\n",sub );
                break;
        case 3: mul=f_num*s_num;
                printf("multiplication of two numbers is%d\n",mul );
                break;
        case 4: divi=f_num/s_num;
                printf("division of two numbers= %d\n",divi );
                break;
        default: printf("invalid choice\n" );
    }
    /*return 0;*/
}
