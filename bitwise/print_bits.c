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
        // Check if the ith bit of 'num' is set (1) or not (0)
        if(num &(1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}