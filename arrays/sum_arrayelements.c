/* Given an array of integers, find and print the sum of all elements. */

#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    
    //taking the user input
    for(i=0; i<5; i++)
    {
        printf("enter the element in %dth index : ", i);
        scanf("%d", &arr[i]);
    }
    
   
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("sum of all the array elements are %d\n", sum);
    
    return 0;
}