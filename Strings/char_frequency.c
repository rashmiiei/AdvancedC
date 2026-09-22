/* Count frequency of a character
   input -> programming */

#include <stdio.h>

int main()
{
    char str[20];
    printf("enter a string : ");
    scanf("%19[^\n]", str);
    

    char ch;
    printf("enter a character you wish to count : ");
    scanf(" %c", &ch);

    char *sptr = str;
    int count=0;
    
    while(*sptr != '\0')
    {
        if(*sptr == ch)
        {
            count++;
        }
        sptr++;
        
    }
    printf("the character %c appears %d times in %s \n", ch, count, str);

    return 0;
}
