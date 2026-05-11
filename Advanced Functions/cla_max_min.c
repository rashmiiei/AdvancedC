/* WApto find the maximum and minimum element through CLA */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i, max, min, val;
    
    if(argc <= 1)
    {
        printf("No arguments passed!! \n");
        return 0;
    }
    
    // Initializing min and max with the first number (argv[1])
    max = min = atoi(argv[1]);
    
    // Iterating through remaining arguments starting from argv[2]
    for(i=2; i<argc; i++)
    {
        val = atoi(argv[i]); // Convert current argument to integer
        {
            // Compare with current max and min
            if(val > max)
            {
                max = val;
            }
            
            if(val < min)
            {
                min = val;
            }
        }
    }
    
    printf("max is %d and min is %d \n", max, min);
    
    return 0;
}
