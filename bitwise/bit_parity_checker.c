/* Program to count the number of set bits (1s) in a 32-bit integer 
   and determine the bit parity (Even or Odd). */

#include<stdio.h>

int main()
{
    int num, i, count=0;

    printf("Enter the number : ");
    scanf("%d", &num); //reading user input

    //looping through all bits in a number
    for(i = 31; i >= 0; i--)
    {
        if(num&(1<<i)) //check if the ith bit is set
        {
           count++; //increment if the bit is set
        }
                
    }
    printf("Number of set bits = %d\n", count);
    /*
     * Determine bit parity:
     * If count is even, parity is Even.
     * If count is odd, parity is Odd.
     */

    if((count % 2) == 0)
    {
        printf("even parity \n");
    }
    else
    {
         printf("odd parity \n");
    }
    
    
    return 0;
}

