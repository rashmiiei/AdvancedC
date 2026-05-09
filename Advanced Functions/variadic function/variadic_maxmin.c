/*Write a variadic function in C that finds both the minimum
and maximum of a given set of integers. 

output : Maximum value is 100 
         Minimum value is 12 
         Maximum value is 121 
         Minimum value is 1  */

#include <stdio.h>
#include <stdarg.h>

//Variadic function to find the maximum and minimum
void max_min(int count, ...)
{
    int i, max, min, val;
    va_list ap; //declare a pointer variable to hold the argument li
    
    //Initialise the argument list starting after count
    va_start(ap, count);
    
    //take the first variable as both initial min and max
    min = max = va_arg(ap,int);
    
    //loop through te remaining arguments
    for(int i=1; i<count; i++)
    {
        val = va_arg(ap, int);
        if(val < min)
        {
            min = val;
        }
        if(val > max) 
        {
            max = val;
        }
    }
    
    //clean up the argument list
    va_end(ap);
    
    printf("Maximum value is %d \n", max);
    printf("Minimum value is %d \n", min);
    
}
int main()
{
    
    max_min(4, 12, 100, 21, 66);
    
    max_min(6, 1, 33, 121, 77, 32, 99);
    return 0;
    
}