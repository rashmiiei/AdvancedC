/* Write a macro to define the constant value of PI as 3.14159. Find the area of the circle. */
#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, area;
    printf("enter the value of the radius : ");
    scanf("%f", &radius);
    
    area = (PI * radius * radius);
    printf("Area of the circle is %g.\n", area);
    
    return 0;  
    
}
