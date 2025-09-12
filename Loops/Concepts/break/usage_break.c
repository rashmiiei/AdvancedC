/*The code demonstrates the usage of break statement */
#include <stdio.h>

int main() 
{
    int i;
    
    // Loop from i = 1 to i = 5
    for(i=1; i<=5; i++)
    {
        // If i equals 5, exit the loop
        if(i==5)
        {
            break; // Terminates the loop immediately
        }
        printf("%d\n", i); //Output : 1 2 3 4 end
    }
    printf("end ");
    

    return 0;
}