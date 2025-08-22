#include <stdio.h>

int main()
{
    int num, i;
    printf("enter a number : ");
    scanf("%d", &num);
    
    // Loop from bit 31 (most significant bit) down to bit 0 (least significant bit)
    for(i=31; i >= 0; i--)
    {
        // Insert a space after every 8 bits for better readability
        if((i+1)%8 == 0)
        {
            printf(" ");
        }
        
        // Right-shift 'num' by 'i' bits and mask with 1 to isolate the ith bit
        // Print '1' if the bit is set, otherwise print '0'
        printf("%d",(num >> i) & 1);
    }
    printf("\n");

    return 0;
}