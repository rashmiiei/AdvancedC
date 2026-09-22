/* Input: programming
Take a character from the user :g
Output: First occurrence of 'g' is at index 3 */

#include <stdio.h>

int main()
{
    char str[20];
    printf("enter a string : ");
    scanf("%19[^\n]", str);

    char ch;
    printf("enter a character : ");
    scanf(" %c", &ch);
    
    char *sptr = str;
    int i=0;
    while(*sptr != '\0')
    {
        if(*sptr == ch)
        {
            printf("character occurs at %d position \n", i);
            break;
        }
        sptr++;
        i++;
    }


    /* for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            //printf("%c occurs at %d position \n", ch, i); 
        }
    } */
    return 0;
}
