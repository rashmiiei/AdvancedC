/* Enter first string: Hello
   Enter second string: World */

#include <stdio.h>

int main()
{
    char str1[10], str2[10];

    printf("enter the first string : ");
    scanf("%9[^\n]", str1);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    printf("enter the second string : ");
    scanf("%9[^\n]", str2);

    char *sptr1 = str1;
    char *sptr2 = str2;

    while(*sptr1 != '\0')
    {
        sptr1++;
    }

    while(*sptr2 != '\0')
    {
        *sptr1 = *sptr2;
        sptr1++;
        sptr2++;
    }

    *sptr1 = '\0';

    printf("concatenated string is %s \n", str1);

    return 0;
}
