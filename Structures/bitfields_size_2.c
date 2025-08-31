/* 
 * This code demonstrates bit-field usage in C, 
 * allowing memory allocation at the bit level within a structure.
 */

#include <stdio.h>

// Define a structure 'Nibble' with two 4-bit wide fields.
// Bit-fields allow fine-grained control over memory usage.
struct Nibble
{
    
    //if the data type is not specified, compiler assumes it to be an int
    unsigned  lower : 4;  // Lower nibble (4 bits)
    unsigned  upper : 4;  // Upper nibble (4 bits)
};

int main()
{
    struct Nibble nibble;

    // Print the size of the structure in bytes.
    // Although each field is 4 bits, the compiler may pad the structure,
    // so the total size is typically 1 byte (8 bits).
    printf("%zu\n", sizeof(nibble)); //output is 4

    return 0;
}