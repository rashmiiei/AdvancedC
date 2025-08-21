/* 
 * Program to count the number of 1's (set bits) in an 8-bit hexadecimal input.
 * The user enters a hexadecimal number (e.g., 0xF5), and the program calculates
 * how many bits are set to 1 in its binary representation.
 */
#include <stdio.h>

int main()
{
    int count = 0;
    unsigned char iter; // 8-bit variable to hold the user input
    
    // Prompt the user to enter a hexadecimal number (up to 8 bits)
    printf("Enter a hexadecimal number (e.g., 0xF5): ");
    scanf("%hhx", &iter);
    
    // Loop until all bits are shifted out
    // In each iteration, check if the least significant bit is 1
    for(count = 0; iter!= 0; iter >>= 1)
    {
        if(iter & 1) // Bitwise AND to check if LSB is 1
        {
            count++; // Increment count if bit is set
        }
    }
    
    printf("Number of 1 present is %d\n", count);
    
    return 0;
}