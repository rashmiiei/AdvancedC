/* The code detects the Endianness of the system it is working on */

#include <stdio.h>

union Endian
{
    unsigned int value;
    unsigned char byte[4];
    
};

int main()
{
    // Initialize the union with a hexadecimal value
    union Endian e = {0x12345678};
    
    // Check the first byte (lowest memory address) to determine endianness
    // If it's 0x78, the least significant byte is stored first → Little Endian
    // Otherwise, it's Big Endian
    e.byte[0] == 0x78 ? printf("little\n") : printf("Big\n");
    
    return 0;
}