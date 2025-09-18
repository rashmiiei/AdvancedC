/* C program to check Most Significant Bit (MSB) of a number is set or not */
#include <stdio.h>

int main() 
{
    int num;
    
    // Prompt the user to enter a number
    printf("enter a number : ");
    scanf("%d", &num);
    
    // Check if the Most Significant Bit (MSB) of a 32-bit integer is set
    // (1 << 31) creates a mask with only the MSB set: 10000000...0 (bit 31)
    // Bitwise AND with num will be non-zero if MSB is set
    if(num & (1<<31))
    // if (num & (1 << (sizeof(num) * 8 - 1)))
    { 
        printf("MSB is set \n"); // MSB is 1 → number is negative in signed int
    }
    else
    {
        printf("MSB is unset \n"); // MSB is 0 → number is non-negative
    }
   

    return 0;
}