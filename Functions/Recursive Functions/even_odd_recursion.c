/* WAP to print numbers from 1 to 10 in such a way that when no. is odd, add 1 
and when no. is even, subtract 1 

OUTPUT : 2 1 4 3 6 5 8 7 10 9 */

#include <stdio.h>

// Function declarations
void odd();
void even();

// Global variable to track current number
int n=1;

// Function to handle odd numbers
void odd()
{
    if(n <= 10)
    {
        printf("%d ", n+1);
        n++;
        even();
    }
    return;
}

// Function to handle even numbers
void even()
{
    if(n <= 10)
    {
        printf("%d ", n-1);
        n++;
        odd();
    }
    return;
}

int main()
{
    // Start the sequence by calling odd()
    odd();
    
    return 0;
}

