/* This codes demonstrates how to count the number of digits in any given number */
#include <stdio.h>

int main()
{
    int num, count=0;
    printf("Enter any number : ");
    scanf("%d", &num);
    
    // Loop to count the number of digits in the input number
    while(num != 0)
    {
        num /= 10; // Remove the last digit from the number
        count++;   // Increment digit count
    }
    
    // Display the total number of digits
    printf("The no. of digits is %d\n", count);

    return 0;
}