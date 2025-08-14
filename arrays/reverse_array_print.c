//Read 5 integers from the user and print them in reverse order.

#include <stdio.h>
int main()
{
    int arr[5];
    
    //taking the user input
    for(int i=0; i<5; i++)
    {
        printf("enter the element in %dth index : ", i); //if I write position in place of index, then i+1. 
        scanf("%d", &arr[i]);
    }
    
    //printing the array in reverse order
    for(int i=4; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
    
    
}