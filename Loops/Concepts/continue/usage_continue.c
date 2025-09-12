/*The code demonstrates the usage of continue statement */
#include <stdio.h>

int main() 
{
    // Loop from i = 1 to i = 5
    for(int i=1; i<=5; i++)
    {
        // If i equals 3, skip this iteration
        if (i == 3)
        {
            continue; // Skips printing 3 and moves to the next loop cycle
        }
        // Print the current value of i
        printf("%d \n", i); // Output: 1 2 4 5
    }
    
    return 0;
}