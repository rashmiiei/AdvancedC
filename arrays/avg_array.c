/* WAP to calculate the Average of Array : Write a program to calculate and print the average value of elements in an array. */
#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    float avg;
    
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
    
    avg = (float)sum/5;
    printf("Average of the array elements are : %g\n", avg);
    
    return 0;
}