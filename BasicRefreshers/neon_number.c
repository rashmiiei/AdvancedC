#include <stdio.h>
int main()
{
    int num, square, sum=0, rem, original_num;
    printf("enter a number : ");
    scanf("%d", &num);

    //original_num = num;
    square = num*num;

    while(square != 0)
    {
        rem = square % 10;
        sum += rem;
        square = square/10;
    }

    if(sum == num)
    {
        printf("neon number \n");
    }
    else
    {
        printf("not a neon number \n");
    }
    return 0;
}

