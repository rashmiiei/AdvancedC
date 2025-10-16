/* 
   C program to count total number of zeros and ones 
   in the binary representation of a 32-bit integer 
   using bitwise operators 
*/
#include <stdio.h>

int main() 
{
    int num, zeroes=0, ones=0, i;
    
    // Prompt user to enter an integer
    printf("enter a number : ");
    scanf("%d", &num);
    
    for(i=0; i<32; i++)
    {
        //If LSB is set then increment ones otherwise zeros
        if(num & 1)
        {
           ones++; 
        }
        else
        {
            zeroes++;
        }
        
        // Right shift the number by 1 to check the next bit
        num = num >> 1;
    }
    printf("Number of zeroes is %d \n", zeroes);
    printf("Number of ones is %d \n", ones);
    

    return 0;
}