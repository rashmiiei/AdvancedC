#include <stdio.h>

int main()
{
    int num, rem, original, rev=0;
    printf("enter a number : ");
    scanf("%d", &num);

    original = num;

    while(num!=0)
    {
        rem = num%10;
        rev = rev * 10 + rem;
        num = num/10;
    }   

    if(original == rev)
    {
        printf("palindrome!  \n");
    }
    else
    {
        printf("not !!\n");
    }

    return 0;
}
