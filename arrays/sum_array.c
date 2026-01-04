#include <stdio.h> 
int sum_array(int *, int); 
int sum_array(int * array, int size) 
{ 
	int i, sum=0; 
	for(i=0; i < size; i++) 
	{ 
		sum += array[i]; 
	} 
	//printf("sum is %d \n", sum); 
	return sum; 
}
	int main() 
	{ 
		int size, sum, iter; 
		printf("enter the size of the array : "); 
		scanf("%d", &size); int arr[size]; 
		
		printf("enter the array elements : "); 
		for(iter=0; iter<size; iter++) 
		{ 
			scanf("%d", &arr[iter]); 
		} 
		sum = sum_array(arr, size ); 
		printf("sum of all the array elements is %d", sum); 
		return 0; 
	}