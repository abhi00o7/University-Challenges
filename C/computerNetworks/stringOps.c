/* C 
Abhishek Kumar
2017001069
CSE IBM
 */
#include <stdio.h> 
  
#define OUT    0 
#define IN    1 
  
// returns number of words in str 
unsigned countWords(char *str) 
{ 
    int state = OUT; 
    unsigned wc = 0;  // word count 
  
    // Scan all characters one by one 
    while (*str) 
    { 
        // If next character is a separator, set the  
        // state as OUT 
        if (*str == ' ' || *str == '\n' || *str == '\t') 
            state = OUT; 
  
        // If next character is not a word separator and  
        // state is OUT, then set the state as IN and  
        // increment word count 
        else if (state == OUT) 
        { 
            state = IN; 
            ++wc; 
        } 
  
        // Move to next character 
        ++str; 
    } 
  
    return wc; 
} 
  
// Driver program to tes above functions 
int main(void) 
{ 
    char str[] = "This counts the number of words in the string."; 
    printf("No of words : %u", countWords(str)); 
    return 0; 
}