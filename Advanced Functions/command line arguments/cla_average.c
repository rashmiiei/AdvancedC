/* WAP to calculate average of numbers passed via command line */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    int i, sum=0;
    float avg;

    // Loop starts from 1 because argv[0] is program name
    for(i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]); // Convert each argument to int and add to sum
    }
    printf("Sum is %d \n", sum);
    
    // If at least one number is provided (argc > 1)
    if(argc > 1)
    {
        avg = (float)sum/(argc - 1);
        printf("Average is %g \n", avg);
    }
    else
    {
        printf("No numbers provided \n");
    }
    
    return 0;
    
}
