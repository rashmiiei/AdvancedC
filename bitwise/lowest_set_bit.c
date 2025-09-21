/* C program to get lowest order or first set bit of a number
INPUT -  Input any number: 22
         Input any number: 5
OUTPUT - First set bit: 1
         First set bit: 0
*/

#include <stdio.h>

int main() 
{
    int num, order = 0, i; // 'order' initialized to 0 to store the position of the first set bit
    
    // Prompt user to enter an integer number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Loop through each bit position from 0 to 30 (assuming a 32-bit integer)
    for(i=0; i<31; i++)
    {
        // Right shift the number by i bits and check if the least significant bit is set
        // If set, store the current bit position in 'order' and break the loop
        if((num >> i) & 1)
        {
            order = i;
            break; // Exit loop after finding the first set bit
        }
    }
    
    printf("Lowest order set bit in %d is  : %d \n", num, order);

    return 0;
}