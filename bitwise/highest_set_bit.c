/* C program to get highest order set bit of a number
INPUT -  Input any number: 22
OUTPUT - Highest order set bit in 22 is 4. */

#include <stdio.h>

int main() 
{
    int num, order=-1, i; // 'order' initialized to -1 to handle case when no bits are set
    
    // Prompt user to enter an integer number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Loop through each bit position from 0 to 30 (assuming 32-bit integer)
    for(i=0; i<31; i++)
    {
        // Right shift the number by i and check if the least significant bit is set
        // If set, update 'order' to current bit position
        if((num >> i) & 1)
        {
            order = i;
        }
    }
    
    // If any bit was set, print the highest order set bit
    if(order != -1)
    {
        printf("Highest order set bit in %d is %d\n", num , order);
    }
    else
    {
        // If number is 0, no bits are set
        printf("0 has no set bits. \n ");
    }

    return 0;
}