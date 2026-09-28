#include <stdio.h>

int main()
{
    char str[10];
    printf("enter a string : ");
    scanf("%9[^\n]", str);

    char *sptr = str; 
    char *rev_sptr = str;

    //traversing the string to reach the end of the string. 
    //it will point to the \0 after the traversal
    while(*rev_sptr != '\0')
    {
        rev_sptr++;
    }

    //to make sure we point to the character before the null character
    rev_sptr--;

    //logic to sreverse the string
    while(sptr < rev_sptr)
    {
        char temp = *sptr;
        *sptr = *rev_sptr;
        *rev_sptr = temp;

        sptr++;
        rev_sptr--;
    }

    printf("Reversed string is %s \n", str);

    return 0;
}
