#include <stdio.h>
int main()
{
    int i, num, foundPrime, range;
	
	// Ask the user to enter the upper limit (range) up to which primes will be printed
    printf("enter the range : ");
    scanf("%d", &range);

	// Loop through all numbers starting from 2 up to (range - 1)
    for(num=2; num < range; num++)
    {
        foundPrime=1; // Assume the current number is prime initially
        
		// Check divisibility of 'num' by all numbers from 2 up to num/2 
		// If divisible, then it's not prime
		for(i=2 ; i <= num/2; i++)
        {
           
            if(num % i == 0) // If remainder is 0, 'num' is divisible by 'i'
            {
                foundPrime=0; // Mark as not prime
                break; // Exit the loop early since we found a divisor
            }
        }
                      
        // If 'foundPrime' is still 1, then 'num' is prime      
        if(foundPrime)
        {
            printf("%d \n", num); // Print the prime number
    
        }
    }

    return 0;
}
