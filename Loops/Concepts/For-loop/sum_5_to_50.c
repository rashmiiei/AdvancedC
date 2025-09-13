/*Calculate the sum of all numbers between 5 and 50 */
#include <stdio.h>

int main() 
{
    int sum=0;
    
    // Loop from 5 to 50, adding each number to 'sum'
    for(int i=5; i<=50; i++)
    {
       sum += i; // Add current value of 'i' to 'sum'
    }
    // Print the final result
    printf("Sum is %d \n", sum);
    return 0;
}