/* WAP to set, clear, toggle nth bit of a number */
#include <stdio.h>

int main() 
{
    int num, pos, res;
    
    // Prompt user to enter an integer number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Prompt user to enter the bit position to modify (0-based index)
    printf("Which bit you want to set ? : ");
    scanf("%d", &pos);
    
    // Set the nth bit using bitwise OR
    // (1 << pos) creates a mask with only the nth bit set
    // ORing with num sets that bit to 1
    res = num | (1 << pos);
    printf("After setting bit %d : %d \n", pos, res);
    
    // Clear the nth bit using bitwise AND with NOT mask
    // ~(1 << pos) creates a mask with all bits set except the nth bit
    // ANDing with num clears that bit to 0
    res = num & ~(1 << pos);
    printf("After clearing bit %d: %d\n", pos, res);
    
    // Toggle the nth bit using bitwise XOR
    // XORing with (1 << pos) flips the nth bit
    res= num ^ (1 << pos);
    printf("After toggling bit %d: %d\n", pos, res);
    
    return 0;
}