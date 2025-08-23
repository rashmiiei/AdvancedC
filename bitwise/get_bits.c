/* WAP to get 'n' bits of a given number */

#include <stdio.h>
int main()
{
    int num, n, res = 0;
    
    //read user input num
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // Prompt user to enter how many bits to extract
    printf("Enter number of bits: ");
    scanf("%d", &n);
    
    // Create a mask with n least significant bits set to 1, then apply it to num
    res = num & (1 << n) - 1; // Extract the lowest n bits from num using bitwise AND
    
    printf("Result = %d\n", res);
    return 0;
}
