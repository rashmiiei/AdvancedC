#include<stdio.h>

int main()
{
    int i, num, rem, rev, original_num;

	// Loop through all 4-digit numbers
    for(i=1000; i<=9999; i++)
    {
       num = i;            // Copy loop variable into num
       original_num = num; // Store original number for comparison
       rev=0;              // Reset reverse for each number
        
		// Reverse the number
        while(num != 0)
        {
            rem = num%10;
            rev = rev * 10 + rem;
            num = num/10;
        }
    
		// Check if number is palindrome
        if(rev == original_num)
        {
            printf("%d ", original_num); // Print palindrome number
        }
    }


    return 0;
}
