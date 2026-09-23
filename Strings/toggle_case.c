/* enter a string : rASHmi
Modified string is RashMI 
*/

#include <stdio.h>

int main()
{
    char str[10];
    printf("enter a string : ");
    scanf("%9[^\n]", str);

    char *sptr = str;

    while(*sptr != '\0')
    {
        if(*sptr >= 'A' && *sptr <= 'Z')
        {
            *sptr = *sptr + ('a' - 'A');
        }
        else if (*sptr >= 'a' && *sptr <= 'z')
        {
            *sptr = *sptr + ('A' - 'a');
        }
        sptr++;
    }

    printf("Modified string is %s \n", str);

   
    return 0;
}
