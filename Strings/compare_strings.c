/* Take 2 strings from the user : Enter first string: hello
                                  Enter second string: hello 
Output : Strings are equal

Example: hello
         world

Output : Strings are not equal */


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

    int len1=0, len2=0;

    while(str1[len1] != '\0')
    {
        len1++;
    }
    while(str2[len2] != '\0')
    {
        len2++;
    }       

    if(len1 != len2)
    {
     printf("Strings are not equal \n");
     return 0;
    }   
     

    char *sptr1 = str1;
    char *sptr2 = str2;

    int flag=0;

    while(*sptr1 != '\0' && *sptr2 != '\0')
    {
        if(*sptr1 != *sptr2)
        {
            flag=1;
            break;
        }
        sptr1++;
        sptr2++;
    }

    if(flag)
    {
        printf("Strings are not equal \n");
    }
    else
    {
        printf("Strings are equal \n");
    }

    return 0;
}
