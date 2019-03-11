/*
    Abhishek Kumar
    2017001069
    CSE(IBM)
*/
#include<stdio.h>
#include<string.h>
//bruteforce function 
int main()
{
    char text[30];
    printf("Enter Text: ");
    gets(text);     //Function to read string from user.
    printf("text: ");
    puts(text);    //Function to display string.
    //patten
    char pattern[30];
    printf("Enter the pattern: ");
    gets(pattern);     //Function to read string from user.
    printf("Entered pattern: ");
    puts(pattern);    //Function to display string.
    int X=strlen(text);
    int Y=strlen(pattern);
    printf("Charecter count in Text=%d \nCharecter count in Pattern=%d\n",X,Y);

    //bruteForce Algorithm for pattern recognition 
    for (int s=0;s<(X-Y);s++){
        for(int index = 0;index < Y;index++)
        {
            if (text[index+s]==pattern[index])
            {
                if (text[index+s+1]==pattern[index+1])
                {
                    printf("Pattern at INDEX %d \n",s);

                }
                else
                {
                    break;
                }

            }
            else
            {
                break;
            }

        }
        printf("Pattern Not found.\n");
    }
    return 0;
}