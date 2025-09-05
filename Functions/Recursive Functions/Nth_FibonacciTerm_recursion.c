/* This code calculates the fibonacci recursively */
#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int Fib(int n)
{
    if(n == 0 || n == 1)  // Base cases: Fib(0) = 0, Fib(1) = 1
	{
		return n;
	}
	else
	{
	    // Recursive case: Fib(n) = Fib(n-1) + Fib(n-2)
		return Fib(n-1) + Fib(n-2);
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	// Call the Fib function and display the nth Fibonacci term
	printf("Term is %d\n", Fib(n));
	
	return 0;
}
	