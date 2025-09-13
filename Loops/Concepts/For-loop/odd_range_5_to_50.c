// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    // Loop from 5 to 50
    for(int i=5; i<=50; i++)
    {
        // Check if the number is odd
        if(i % 2 != 0)
        {
            // Print the odd number followed by a newline
            printf("%d \n", i);
        }
    }

    return 0;
}