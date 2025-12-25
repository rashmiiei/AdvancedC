#include <stdio.h>

int main()
{
    int num, foundFive=0, original_num, rem;
    printf("enter any number : ");
    scanf("%d", &num);

    original_num = num;
    while(num != 0)
    {
        rem = num%10;
        if(rem == 5)
        {
            foundFive=1;
            break;
        }
        num = num/10;
    }
    if(foundFive)
    {
        printf("%d has 5 \n", original_num);
    }
    else
    {
        printf("%d doesn't have 5 \n", original_num);
    }

    return 0;
}
