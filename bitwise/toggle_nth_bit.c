/* C program to toggle or invert nth bit of a number
INPUT -  Input number: 22
         Input nth bit to clear: 1
OUTPUT - After toggling nth bit: 20 (in decimal) */

#include <stdio.h>

int main() 
{
    int num, n, new_num;
    
    // Prompt user to enter an integer number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Prompt user to enter the bit position to set (0 to 31 for a 32-bit integer)
    printf("Enter nth bit to set (0 - 31) : ");
    scanf("%d", &n);
    
    // Set the nth bit of the number using bitwise OR and left shift
    // (1 << n) creates a mask with only the nth bit set
    // num | (1 << n) sets the nth bit of num to 1
    new_num = num ^ (1<<n);
    
    printf("Number after toggling %d bit : %d \n", n, new_num);

    return 0;
}