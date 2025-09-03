#include <stdio.h>
#include <stdlib.h> // For qsort function

// Comparison function for ascending order
// Returns a negative value if a < b, zero if a == b, positive if a > b
int sa(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

// Comparison function for descending order
// Returns a negative value if a > b, zero if a == b, positive if a < b
int sd(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

// Function to print the elements of an integer array
void print(int *a, unsigned int size)
{
    int i=0;
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
 
int main()
{
    // Declare and initialize an array of integers
    int a[5] = {9, 2, 6, 1 , -7};
    
    // Sort the array in ascending order using qsort and sa comparator
    qsort(a, 5, sizeof(int), sa);
    printf("Ascending : ");
    print(a,5); // Calling the print function
    
    // Sort the array in descending order using qsort and sd comparator
    qsort(a, 5, sizeof(int), sd);
    printf("Descending : ");
    print(a,5); // Calling the print function
    
    return 0;
}

   
