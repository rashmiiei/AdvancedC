#include <stdio.h>

int main()
{
    int num, power, result=1;
    
    // Prompt the user to enter the base number
    printf("enter the number : ");
    scanf("%d", &num); // 2
    
    // Prompt the user to enter the exponent
    printf("enter the power to calculate : ");
    scanf("%d", &power); //3 -> 2 * 2 * 2
    
    // Loop to multiply the base 'power' times
    for(int i=0; i < power; i++)
    {
        result *=  num; // 1*2 = 2, 2*2 = 4, 4*2 = 8
    }
    
    printf("%d to the power of %d is %d \n", num, power, result);
    
    
    return 0;
}