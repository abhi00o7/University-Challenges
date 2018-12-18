#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int isPali(char a[20]);
int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    if(isPali(str)){
        printf("palindrome\n");
    }
    else
    {
        printf("not a Palindrome");
    }
    return 0;
}

int isPali(char a[20]){
    int l,i;
    l=strlen(a);
    for(i = 0;i < l/2;i++)
    {
        if (a[i]!=a[l-1-i])
        {
            return (0);
        }
    }
    return 1;
}
