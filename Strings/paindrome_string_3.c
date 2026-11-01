#include <stdio.h>

int main()
{
    char str1[20], str2[20];
    printf("enter a string : ");
    scanf("%19[^\n]", str1);
    
    int len=0, i;
    //copying one string onto another
    char *sptr1 = str1;
    char *sptr2 = str2;

    while(*sptr1 != '\0')
    {
        *sptr2 = *sptr1;
        sptr1++;
        sptr2++;
    }
    
    *sptr2 = '\0';

    sptr1 = str1;

    while(*sptr1 != '\0')
    {
        len++;
        sptr1++;
    }
    
    printf("length is %d \n", len);

    for(i=0; i<len/2; i++)
    {
        char temp = str1[i];
        str1[i] = str1[len-1-i];
        str1[len-1-i] = temp;
    }

    printf("%s \n", str1);

    //string comparison
    sptr1 = str1;
    sptr2 = str2;

    int flag=1;

    for(i=0; i<len; i++)
    {
        if(str1[i] != str2[i])
        {
            flag=0;
            break;
        }

    }
    
    if(flag == 1)
    {
        printf("palindrome \n");
    }
    else
    {
        printf("not a palindrome \n");
    }


    return 0;
}
