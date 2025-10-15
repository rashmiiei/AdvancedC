/* C program to swap two numbers using bitwise operator */

#include <stdio.h>

int main()
{
    int num1, num2;
    
     // Prompt the user to enter two numbers
    printf("Enter any two numbers : ");
    scanf("%d%d", &num1, &num2);
    
    printf("Original value of num1 is %d \n", num1);
    printf("Original value of num2 is %d \n", num2);
    
    // Swap the values using bitwise XOR
    // Step 1: num1 becomes num1 ^ num2
    num1 ^= num2;
    
    // Step 2: num2 becomes (num1 ^ num2) ^ num2 = num1
    num2 ^= num1;
    
     // Step 3: num1 becomes (num1 ^ num2) ^ num1 = num2
    num1 ^= num2;
    
    printf("After swapping value of num1 is %d \n", num1);
    printf("After swapping value of num2 is %d \n", num2);
    
    return 0;
    
}