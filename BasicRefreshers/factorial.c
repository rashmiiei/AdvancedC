/* Program to calculate and print the factorial of a number */
#include <stdio.h>

int main() 
{
    int range, fact=1;
    
     // Prompt the user to enter a number
    printf("enter the range : ");
    scanf("%d", &range);
    
    // Loop from 1 to the entered number to calculate factorial
    for(int i=1; i<=range; i++)
    {
        fact *= i; // Multiply 'fact' by the current value of 'i' in each iteration
    }
    
    // Display the calculated factorial
    printf("factorial of a number is %d \n", fact);

    return 0;
}