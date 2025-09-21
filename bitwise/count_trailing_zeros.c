/* C program to count trailing zeros in a binary number
INPUT -  Input any number: 22
         Input any number: 48
OUTPUT - Trailing zeros: 1
         Trailing zeros: 4
*/

#include <stdio.h>

int main() 
{
    int num, count=0, i; // 'count' stores the number of trailing zeros
    
    // Prompt user to enter an integer number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Loop through each bit position from 0 to 30 (assuming a 32-bit integer)
    for(i=0; i<31; i++)
    {
        // Right shift the number by i bits and check if the least significant bit is set
        // If set, break the loop as we've found the first '1' bit
        if((num >> i) & 1)
        {
            break; // Exit loop after finding the first set bit
        }
        else
        {
            // If the bit is 0, increment the trailing zero count
            count++;
        }
    }
    
    printf("Total number of trailing zeros in %d is: %d\n", num, count);

    return 0;
}