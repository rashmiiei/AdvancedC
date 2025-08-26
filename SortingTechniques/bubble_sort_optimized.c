#include <stdio.h>
int main()
{
	int arr[] = {10, 9, 11, 6, 15, 2};
	int size = sizeof(arr) / sizeof arr[0]; // Finding the size of the array
	int i, j, temp, flag;
	
	// Outer loop for number of passes (size - 1)
	for(int i=0; i<size-1; i++)
	{
		// Inner loop for comparing adjacent elements
        //size - 1 - i because last i elements are already sorted
		for(j=0; j<size-1-i; j++)
		{
			flag=0; // Reset flag at the start of each pass
			
			// If current element is greater than the next, swap them
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
				flag=1; // Set flag to indicate a swap occurred
				
			}
		}
		// If no swaps occurred in this pass, array is already sorted
		if(flag == 0)
		{
		    break;
		}
		
	}
	// Printing the sorted array
	printf("Sorted array is : ");
	for(int i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
	