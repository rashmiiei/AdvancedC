#include <stdio.h>

int main()
{
    int a[] = {5, 4, 10, 1, 6, 2};
    int i, j, temp;
    
    // Calculate number of elements in array
    int n = sizeof (a)/ sizeof a[0]; // 24/4 = 6
    
    // outer loop will run from 1 to n.
    // unsorted sybsection will move from left to right
    //sorted subsection : elements will be compared from right to left
    for(i=1 ; i<n ; i++) 
    {
        temp = a[i]; // Store current element
        j = i-1;     // Start comparing with previous elements
        
        // Shift elements greater than temp to the right
        while((j>=0) && (a[j]>temp))        //only work if both the conditons are true
        {
            a[j+1] = a[j];            
            j--; //moving from right to left and hence decrementing
        }
        // Place temp in its correct position
        a[j+1] = temp;
    }
    
    printf("Sorted array is : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}