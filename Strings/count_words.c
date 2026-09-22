/* Input: hello world from c
   Output: Number of words = 4 */

#include <stdio.h>

int main()
{
    char str[20];
    printf("enter a string : ");
    scanf("%19[^\n]", str);
    
    int word_count=0;

   //prev stores the character from the previous iteration. 
   //We start with ' ' so that the first character of the string 
   //is treated as coming after a space (i.e. the first word starts).
    char prev = ' ';
   
    char *sptr = str;

    while(*sptr != '\0')
    {
       // prev = previous character 
       // *sptr = current character 
       // If previous character was a space and current character 
       // is not a space, we have reached the start of a new word.
        if(prev == ' ' && *sptr != ' ')
        {
            word_count++;
        }

       // Save the CURRENT character in prev. 
       // After this line, the current character becomes 
       // the PREVIOUS character for the NEXT iteration.
        prev = *sptr;
        sptr++;
    }

    printf("no. of words present is %d \n", word_count);

    return 0;
}
