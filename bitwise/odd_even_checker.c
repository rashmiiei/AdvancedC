#include <stdio.h>

int main() 
{
    int num;
    
    // Prompt the user to enter a number
    printf("enter a number : ");
    scanf("%d", &num);
    
    // Use bitwise AND to check if the number is odd
    // If the least significant bit is 1, the number is odd
    if(num & 1)
    {
        printf("Odd!\n");
    }
    else
    {
        printf("Even!\n");
    }

    return 0;
}