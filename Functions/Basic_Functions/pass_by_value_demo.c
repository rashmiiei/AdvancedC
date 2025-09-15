// Online C compiler to run C program online
#include <stdio.h>

// Function declaration: takes a pointer to a float
void calculate_price(float); //function signature

// Function definition: modifies the original value by adding 18% GST
void calculate_price(float value)
{
    value  = value + (0.18 * value);
    printf("final price is : %g \n", value);
}

int main()
{
    float value = 100.0;
    
    // Call the function with the value (pass-by-value)
    calculate_price(value); //function call
    
    // Print the original value again to show it remains unchanged
    printf("Value is  : %g \n", value); // %g is used to eliminate extra zeroes. 

    return 0;
}