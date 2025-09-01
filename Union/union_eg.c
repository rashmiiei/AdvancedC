/* The code demeonstrates how union works 

Output - Sign: 0
		 Exponent: 80
		 Mantissa: 4CCCCD */

#include <stdio.h>

union FloatBits
{
    float degree;
    struct
    {
        unsigned m : 23; // Mantissa (fractional part)
        unsigned e : 8; // Exponent (biased)
        unsigned s : 1; // Sign bit (0 for positive, 1 for negative)
    } elements;
};

int main()
{
    union FloatBits fb = {3.2}; // Initialize the union with a float value
    
    printf("Sign: %X\n", fb.elements.s);     // Print the sign bit (0 = positive, 1 = negative)
    printf("Exponent: %X\n", fb.elements.e); // Print the exponent part in hexadecimal (biased by 127 in IEEE 754)
    printf("Mantissa: %X\n", fb.elements.m); // Print the mantissa (fractional part) in hexadecimal

    return 0;
}