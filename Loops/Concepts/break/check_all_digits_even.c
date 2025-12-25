#include <stdio.h>

int main()
{
    int num, flag=0, rem;
    
	// Prompt the user to enter a number
    printf("enter any number : ");
    scanf("%d", &num);

    // Loop until the number becomes 0
    while(num != 0)
    {
        // Extract the last digit of the number
        rem = num%10;

		// Extract the last digit of the number
        if(rem % 2 != 0)
        {
            flag = 1; // Set flag if any odd digit is found
            break; // Exit loop immediately since condition fails
        }
		
		// Remove the last digit (integer division)
        num = num/10;
    }

	// If no odd digit was found, all digits are even
    if(flag == 0)
    {
        printf("all even \n");
    }
    else
    {
        printf("not all even \n");
    }

    

    return 0;
}
