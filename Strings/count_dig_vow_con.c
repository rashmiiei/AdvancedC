/*  Input:
Hello World 123

Output:
Vowels      : 3
Consonants  : 7
Digits      : 3
Spaces      : 2 
 
 */

#include <stdio.h>

int main()
{
    char str[10];
    printf("enter a string : ");
    scanf("%9[^\n]", str);

    int vowel=0;
    int consonant=0;
    int digit=0;
    int space=0;


    char *sptr = str;
    while(*sptr != '\0')
    {
        char ch = *sptr;

        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {
            if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if(ch == ' ')
        {
            space++;
        }

        sptr++;
    }

    printf("No. of vowels is %d \n", vowel);
    printf("No. of consonants is %d \n", consonant);
    printf("No. of digits is %d \n", digit);
    printf("No. of spaces is %d \n", space);



    return 0;
}
