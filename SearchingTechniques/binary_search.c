/* this code performs binary search operation in a sorted array */
#include <stdio.h>
int main()
{
    // Initialize a sorted array 
    // Binary search will not work if array is not sorted
    int a[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    
    // Calculate the size of the array
    int n = sizeof (a)/ sizeof (a[0]);
    
    // initializing the left, right and the mid values
    int l=0, r=n-1, mid, data;
    
    //taking user input
    printf("enter the data to be found : ");
    scanf("%d", &data);
    
    while(l <= r)
    {
        //calculating the middle index
        mid = (l+r)/2;
        
        //case 1 
        // Check if the middle element is the target
        if(data == a[mid])
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        // case 2 
        // If the data is smaller, search the left half
        else if (data < a[mid])
        {
            r = mid-1;
        }
        //case 3
        // If the data is larger, search the left half
        else
        {
            l = mid+1;
        }
        
    }
    // if l > r, element not found condition
    printf("Element not found\n");
    return -1;

}