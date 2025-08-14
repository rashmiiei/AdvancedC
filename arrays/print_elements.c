/* Take 5 integers from the user and store them in an array.

Print the array elements. */

#include <stdio.h>
int main()
{
    int arr[5], i;
    
    //taking the user input
    for(i=0; i<5; i++)
    {
        printf("enter the element in %dth index : ", i);
        scanf("%d", &arr[i]);
    }
    
    //printing the array elements
    printf("Array elements are : ");
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
        
    }
    
    
    return 0;
    