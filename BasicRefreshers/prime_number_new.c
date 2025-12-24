#include <stdio.h>

int main()
{
    int num, i, isPrime;
    printf("enter a number : ");
    scanf("%d", &num);

    if(num == 0 || num == 1)
    {
        isPrime = 0;
    }
    else
    {
        for(i=2; i<= num-1; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
            
            }
        }
    }

    if(isPrime)
    {
        printf("prime number  \n");
    }
    else
    {
        printf("not a prime number \n");
    }

    return 0;
}
