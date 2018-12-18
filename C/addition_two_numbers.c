#include <stdio.h>
int main()
{
    /*clrscr();*/
    printf("program_for_addition_of_two_numbers\n\n");
    int f_num,s_num,sum;
    printf("enter_first_number: ");
    scanf("%d",&f_num);
    printf("enter_second_number: ");
    scanf("%d",&s_num);
    sum= f_num+s_num;
    printf("\nthe_result_of_the_given_numbers_is: %d",sum);
    /*getch();*/
}
