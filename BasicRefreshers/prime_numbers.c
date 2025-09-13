/*Check if a number is prime or not */
#include <stdio.h>

int main() 
{
    int num, factor;
    
    // Prompt the user to enter a number
    printf("enter a number to check : ");
    scanf("%d", &num);
    
    // Handle edge cases: 0 and 1 are not prime numbers
    if(num == 0 || num == 1)
    {
        printf("not a prime number \n");
    }
    else
    {
        // Loop from 2 to num - 1 to check for factors
        for(factor=2 ; factor<num; factor++)
        {
            // If num is divisible by any factor, it's not prime
            if(num % factor == 0)
            {
                printf("Not a prime number \n");
                break;
            }
        }
        
        // If no factors were found, then it's a prime number
        if(factor == num)
        {
            printf("prime number \n");
        }
    }
    return 0;
}