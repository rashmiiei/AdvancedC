/* Print all numbers from 1 to 10 except 6 */
#include <stdio.h>

int main() 
{
    // Loop from i = 1 to i = 10
    for(int i=1; i<=10; i++)
    {
        // If i equals 6, skip this iteration
        if (i == 6)
        {
            continue; // Skips printing 6 and moves to the next loop cycle
        }
        // Print the current value of i
        printf("%d \n", i); 
    }
    
    return 0;
}