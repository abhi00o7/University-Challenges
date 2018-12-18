#include<stdio.h>
#include<stdlib.h>
int main()
{
    //char s[10]={'a','b','h','i','\0'};
    //int index;
    // for(index = 0;s[index] !='\0' ;index++)
    // {
    //     printf("%c",s[index]);
    // }
    char s[20];
    printf("Enter : ");
    // scanf("%s",s);
    gets(s);
    puts(s);
    strupr(s);
    printf("%s",s);
return 0;
}