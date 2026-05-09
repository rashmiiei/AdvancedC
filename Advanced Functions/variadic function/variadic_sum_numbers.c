/* This code demonstrates the use of variadic function */

#include <stdio.h>
#include <stdarg.h> // For handling variable arguments using va_list

// Variadic function to calculate the sum of integers
int add(int count, ...) // 'count' tells how many arguments follow
{
    va_list ap; // Declare a variable to hold the argument list
    int i, sum;
    
    // Initialize the argument list starting after 'count'
	va_start(ap, count);
    
    sum=0;
    
    // Loop through each argument and add it to 'sum'
    for( i=0; i < count; i++)
    {
        sum = sum + va_arg(ap,int);
    }
    
    // freeing the memory
	va_end(ap);
    
    return sum;
}
int main()
{
    int ret;
    ret = add(3, 2, 4, 4); // Call 'add' with 3 arguments: 2, 4, 4
    printf("Sum is %d\n", ret);
    
    ret = add(5, 3, 3, 4, 5, 10); // Call 'add' with 5 arguments: 3, 3, 4, 5, 10
    printf("Sum is %d\n", ret);
    
    return 0;
}

