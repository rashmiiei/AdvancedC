/* This code perform linear search operation */

#include <stdio.h>

int main()
{
    int size, data, i;
    // Prompt user to enter the size of the array
    printf("Enter the size of array : \n");
	scanf("%d", &size);
	
	// Prompt user to enter the data to be searched
	printf("enter the data to be found : \n");
	scanf("%d", &data);
	
	int a[size];
	
	// Prompt user to enter the elements of the array
	printf("Enter the elements of the array : ");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
    
    // Perform linear search to find the data
    for(i=0; i<size; i++)
    {
        if(a[i] == data) // Check if current element matches the data
        {
            printf("element found at index : %d\n", i);
            // printf("element found at position : %d", i+1);
            break;
        }
    }
    // If loop completes without finding the data
    if(i==size)
    {
        printf("Data not found\n");
    }

    return 0;
}