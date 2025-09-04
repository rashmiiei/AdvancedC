/* This code is calculating the factorial of a number using recursion */

#include <stdio.h>

// Function to calculate factorial recursively
int Fact(int n)
{
    // Base case: factorial of 1 is 1
    if(n == 0 || n == 1)
    {
       return 1;
    }
    else
    {
        // Recursive case: n * factorial of (n-1)
        return n * Fact(n-1);
    }
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, Fact(n));

    return 0;
}