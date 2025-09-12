/*The code demonstrates the usage of break statement */
#include <stdio.h>

int main() 
{
    int num;
    
    // Start of an infinite loop using do-while
    do 
    {
       printf("enter a number : ");
       scanf("%d", &num);
       printf("entered number is %d \n: ", num);
       
       // Check if the number is odd
       if(num % 2 != 0)
       {
           // If the number is odd, break out of the loop
           break;
       }
       // If the number is even, loop continues
    } while(1); // Infinite loop until break is triggered
    
    printf("Thankyou! \n");
    
    return 0;
}