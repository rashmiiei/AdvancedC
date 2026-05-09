/* Write a variadic function in C that calculates the average of a given set of integers. */

#include <stdio.h>
#include <stdarg.h>

//Variadic function to calculate the average
float average(int count, ...)
{
    va_list ap; //declare a pointer variable to hold the argument li
    int i, sum = 0;
    float avg;
    
    //Initialise the argument list starting after count
    va_start(ap, count);
    
    for(i=0; i<count; i++)
    {
        sum += va_arg(ap, int); //fetch next argument as int and add to the sum
    }
    
    //clean up the argument list
    va_end(ap);
    
    avg = (float)sum/count;
    
    return avg;
}
int main()
{
    float avg_result;
    
    // Call 'average' with 4 integers: 12, 33, 21, 66
    avg_result = average(4, 12, 33, 21, 66);
    printf("Average is %g\n", avg_result);
    
    // Call 'average' with 6 integers: 12, 33, 21, 77, 32, 99
    avg_result = average(6, 12, 33, 21, 77, 32, 99);
    printf("Average is %g\n", avg_result);
    
    return 0;
    
}