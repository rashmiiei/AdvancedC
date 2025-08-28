/* This code performs recursive binary search operation */

#include <stdio.h>
//  Recursive Binary Search function
int RBinSearch(int a[], int l, int r, int data)
{
	// Base case: if left index exceeds right, element is not found
	if(l > r)
	{
		return -1;
	}
	// Calculate the middle index
	int mid = (l+r) / 2;
	
	// If the middle element matches the target, return its index
	if(a[mid] == data)
	{
		return mid;
	}
	// If the target is smaller than the middle element, search the left half
	else if (data < a[mid])
	{
		return RBinSearch(a, l, mid-1, data);
	}
	// If the target is greater than the middle element, search the right half
	else
	{
		return RBinSearch(a, mid+1, r, data);
	}
}
	
int main()
{
	// Initializing a sorted array 
	int a[] = {3,6,8,12,14,17,25, 29, 31, 36, 42, 47, 53, 55, 62};
    
	// Calculate the size of array
	int n = sizeof (a) / sizeof (a[0]);
	int l=0, r = n-1, mid, data;
	
	//prompting user to ennter the value of data
	printf("enter the data to be found : ");
	scanf("%d", &data);
	
    // Call the recursive binary search function	
	int result = RBinSearch(a, 0, n-1, data);
	
    // Display result based on return value	
	if(result == -1)
	{
		printf("data not found\n");
	}
	else
	{
		printf("data found at index %d\n", result);
	}
		
	return 0;
}