/* This code demonstrates the freedom of getting emory allocated in bits */

#include <stdio.h>

// Define a structure 'Nibble' with two 4-bit wide fields.
// Bit-fields allow fine-grained control over memory usage.
struct Nibble
{
    unsigned char lower : 4;
    unsigned char upper : 4;
};

int main()
{
    struct Nibble nibble;
    
    // Print the size of the structure in bytes.
    // Although each field is 4 bits, the compiler may pad the structure,
    // so the total size is typically 1 byte (8 bits).
    printf("%zu\n", sizeof(nibble));
    

    return 0;
}