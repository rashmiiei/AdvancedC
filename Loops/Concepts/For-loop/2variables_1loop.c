#include <stdio.h>

int main()
{
	int i, j, n, sum=0;
	
	// Prompt user to enter a number
	printf("Enter a number : ");
	scanf("%d", &n);
	
	// Loop from i = 1 to n and j = n to 1 simultaneously
	for(i=1, j=n; i<=n, j>=1; i++, j--)
	{
		sum += i; // Add current value of 'i' to 'sum'
		printf("%d \n", j); // Print current value of 'j'
	}
	printf("Sum is %d \n", sum);
	
	return 0;
}