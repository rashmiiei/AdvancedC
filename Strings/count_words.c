/* Input: hello world from c
   Output: Number of words = 4 */

#include <stdio.h>

int main()
{
    char str[20];
    printf("enter a string : ");
    scanf("%19[^\n]", str);
    
    int word_count=0;
    
    char prev = ' ';
    char *sptr = str;

    while(*sptr != '\0')
    {
        if(prev == ' ' && *sptr != ' ')
        {
            word_count++;
        }
        
        prev = *sptr;
        sptr++;
    }

    printf("no. of words present is %d \n", word_count);

    return 0;
}
