#include <stdio.h>

// Function prototype declaration
void print_fibonacci_series(int );

// Function to print Fibonacci series up to n terms
void print_fibonacci_series(int n)
{
    // Initialize the first two Fibonacci numbers
    int first=0, second=1, next, i;
    
    // Display header message
    printf("Fibonacci series up to %d terms : \n", n);
    
    // Loop to generate and print Fibonacci numbers
    for(i=1; i<=n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
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