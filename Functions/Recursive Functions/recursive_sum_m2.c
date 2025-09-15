#include <stdio.h>

// Function declaration: sum takes an integer and returns an integer
int sum(int );

// Function definition: recursively calculates the sum of first n natural numbers
int sum(int n)
{
    if(n==1) // Base case: if n is 1, return 1
    {
        return 1;
    }
    else
    {
        // Recursive case: calculate sum of numbers up to n-1
        int sumNm1 = sum(n-1);
        
        // Add current number n to the result of sum(n-1)
        int sumN = sumNm1 + n;
        return sumN; // Return the total sum up to n
    }
}
int main() 
{
    // Call the sum function with argument 5 and print the result
    printf("sum is %d \n", sum(5));   

    return 0;
}