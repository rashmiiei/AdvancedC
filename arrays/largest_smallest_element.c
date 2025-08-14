/*Write a program to : Take n integers from the user. Find and print the largest and smallest in the array. */

#include <stdio.h>
int main()
{
    int arr[5], i, max, min;
    max = arr[0];
    
    //taking the user input
    for(i=0; i<5; i++)
    {
        printf("enter the element in %dth index : ", i);
        scanf("%d", &arr[i]);
    }
	
	max = arr[0];
	min = arr[0];
	
	for(i=0; i<5; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
		
	}
	
	printf("largest element is %d\n", max);
	printf("smallest element is %d\n", min);
    
    return 0;
	
} 

