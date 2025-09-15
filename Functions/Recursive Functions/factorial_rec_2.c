#include <stdio.h>

// Function declaration: factorial takes an integer and returns an integer
int factorial(int );

// Function definition: recursively calculates the factorial of a number
int factorial(int n)
{
    // Base case: factorial of 1 is 1
    if(n==1)
    {
        return 1;        
    }
    else
    {
        // Recursive case: calculate factorial of (n - 1)
        int factNm1 = factorial(n - 1);
        
        // Multiply result of factorial(n - 1) with current n
        int factN = factNm1 * n;
        
        // Return the computed factorial of n
        return factN;
    }
}
int main()
{
    // Call the factorial function with argument 5 and print the result
    printf("Factorial is %d \n", factorial(5));
    
    return 0;
}