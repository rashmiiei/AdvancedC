#include <stdio.h>

int main()
{
    int num, rem, sum=0, prod=1;

    printf("enter a number : ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num%10;
        sum += rem;
        prod *= rem;
        num = num/10;
    }
    if(sum == prod)
    {
        printf("spy number \n");
    }
    else
    {
        printf(" not a spy number \n");
    }

    return 0;
}
