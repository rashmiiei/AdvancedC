#include <stdio.h>

int main()
{
    unsigned char num, swapped;
    printf("enter the number(eg: 0xF2) : ");
    scanf("%hhx", &num);
    
    // Swap nibbles: upper nibble becomes lower and vice versa
    swapped = ((num & 0xF0) >> 4) | (((num & 0x0F) << 4));
    
    // Display results in uppercase hexadecimal format
    printf("Original number: %X\n", num);
    printf("After swapping nibbles: %X\n", swapped);
    
    

    return 0;
}