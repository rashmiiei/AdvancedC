#include <stdio.h>

// Recursive function to calculate the sum of first 'n' natural numbers
int Sum(int n)
{
	if(n==1) // Base case: if n is 1, return 1
	{
		return 1;
	}
	else
	{
		// Recursive case: add current number 'n' to the sum of numbers before it
		return n + Sum(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	// Call the Sum function and display the result
	printf("Sum is %d\n", Sum(n));
	
	return 0;
}
	