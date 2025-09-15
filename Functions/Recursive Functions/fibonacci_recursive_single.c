/* Write a Function to write nth term of Fibonacci sequence */
#include <stdio.h>

// Function declaration: fib takes an integer and returns an integer
int fib(int );

// Function definition: recursively calculates the nth Fibonacci number
int fib(int n)
{
    // Base case: fib(0) = 0
    if(n==0)
    {
        return 0;
    }
    // Base case: fib(1) = 1
    if(n==1)
    {
        return 1;
    }
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN; // Return the nth Fibonacci number
    
    
}
int main()
{
    int n=7;
    printf("Fibonacci number at position %d is %d\n", n, fib(n));
    return 0;
}