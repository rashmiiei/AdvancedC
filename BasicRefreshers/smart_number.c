#include <stdio.h>

int main()
{
    int num, rem, fact, original, sum=0, i;
	
	// Prompt user to enter a number
    printf("enter a number : ");
    scanf("%d", &num);

	 // Store the original number for comparison later
    original = num;
	
	// Loop through each digit of the number
    while(num!=0)
    {
		// Extract the last digit
        rem = num % 10;
		
		// Calculate factorial of the digit
        fact=1;
		
        for(i=1; i<=rem; i++)
        {
            fact = fact * i; // Multiply sequentially to get factorial
            
        }
		// Add factorial of the digit to the running sum
        sum += fact;
		
		// Remove the last digit
        num = num/10;
    }
    
    //printf("sum is %d \n", sum);
	
	// Compare sum of factorials with the original number
    if (original == sum)
    {
        printf("strong number \n");
    }
    else
    {
        printf("not strong number \n");
    }
	
	return 0;
}
