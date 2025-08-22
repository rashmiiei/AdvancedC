/* this code counts the number of 1's and 0's */

#include <stdio.h>

int main()
{
    int num, i, odd=0, even=0;
    printf("enter a number : ");
    scanf("%d", &num);
    
    // Loop through all 32 bits from MSB (bit 31) to LSB (bit 0)
    for(i=31; i >= 0; i--)
    {
       // Use bitwise AND with a left-shifted 1 to check the ith bit
        if(num &(1 << i))
        {
            odd++; // If the bit is 1, increment 'odd'
        }
        else
        {
            even++; // If the bit is 0, increment 'even'
        }
    }
    // Display the count of 1s and 0s in the binary representation
    printf("No. of 1's and 0's are %d and %d", odd, even);

    return 0;
}