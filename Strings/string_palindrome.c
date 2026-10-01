#include <stdio.h>

int main()
{
    char str[20], org_str[20];

    printf("enter a string : ");
    scanf("%19[^\n]", str);

    int len=0;
    char *sptr = str;
    char *org_sptr = org_str;

    //copying the string into another string
    while(*sptr != '\0')
    {
        *org_sptr = *sptr;
        org_sptr++;
        sptr++;
    }
    *org_sptr = '\0';
    
    printf("original string is %s \n", org_str);

    sptr = str;

    //calculating the length of the string
    while(*sptr != '\0')
    {
        len++;
        sptr++;
    }

    printf("length is %d \n", len);
    
    sptr = str;

    int i;

    //reversing the string
    for(i=0; i<len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }

    printf("Reversed string is %s \n", str);
    
    
    sptr = str;
    org_sptr = org_str;

    int is_palindrome = 1;

    //String comparison
    while(*org_sptr != '\0' && *sptr != '\0')
    {
        if(*org_sptr != *sptr)
        {
            is_palindrome = 0;
            break;
        }
        org_sptr++;
        sptr++;

    }

    if(is_palindrome)
    {
        printf("palindrome \n");
    }
    else
    {
        printf("Not palindrome \n");
    }


    
    return 0;
}
