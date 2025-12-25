#include <stdio.h>

int main()
{
    int num, i, div, sum=0, original_num;
    
    printf("enter any number : ");
    scanf("%d", &num);

    original_num = num;

	// Loop through all numbers from 1 to num/2 
	// No need to check beyond num/2 because no divisor of num is greater than num/2 except num itself
    for(i=1; i<=num/2; i++)
    {
		// Check if i is a divisor of num
        if(num % i == 0)
        {
            div = i;  // store the divisor
            sum += div; // add divisor to sum
        }
    }

	// A perfect number is one where the sum of its proper divisors equals the number itself
    if(original_num == sum)
    {
        printf("perfect number \n");
    }
    else
    {
        printf("not a perfect number \n");
    }

    return 0;
}
