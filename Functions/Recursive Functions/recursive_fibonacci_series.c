#include <stdio.h>

// Function prototype to calculate nth Fibonacci number recursively
int fibonacci(int );

// Function prototype to print the Fibonacci series up to n terms
void print_fibonacci_series(int );

// Function to print the Fibonacci series up to n terms
void print_fibonacci_series(int n)
{
    printf("Fibonacci series upto %d : \n", n);
    
    // Loop through each term and print the Fibonacci number
    for(int i=0; i<n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n)
{
    // Base case: 0th Fibonacci number is 0
    if(n==0)
    {
        return 0;
    }
    // Base case: 1st Fibonacci number is 1
    else if(n==1)
    {
        return 1;
    }
    else
    {
        // Recursive case: sum of previous two Fibonacci numbers
        int fibNm1 = fibonacci(n-1);
        int fibNm2 = fibonacci(n-2);
        int fibN = fibNm1 + fibNm2;
        return fibN;
        
    }
}
int main()
{
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d", &n);
    
    if(n<=0)
    {
        printf("Please enter a positive number. \n");
    }
    else
    {
        // Call function to print Fibonacci series
        print_fibonacci_series(n);
    }
    return 0;
}