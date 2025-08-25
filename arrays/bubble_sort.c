#include <stdio.h>
int main()
{
	int arr[] = {10, 9, 11, 6, 15, 2};
	
	//Calculating the size of the array
	int size = sizeof(arr) / sizeof arr[0]; //24/4 = 6
	int i, j, temp;
	
	// Outer loop for number of passes (size - 1)
	for(int i=0; i<size-1; i++)
	{
		// Inner loop for comparing adjacent elements
		for(j=0; j<size-1; j++)
		{
			// If current element is greater than the next element, swap them
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
		
	}
	printf("Sorted array is : ");
	for(int i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}

	
