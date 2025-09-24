#include <stdio.h>

int main()
{
	// Declare and initialize a 2D array with 2 rows and 3 columns
	int arr[2][3] = {10, 20, 30, 40, 50, 60};
		
	// Declare loop variables for rows and columns
	int rows, cols;
	
	// Loop through each row
	for(rows = 0; rows < 2; rows++)
	{
		// Loop through each column in the current row
		for(cols = 0; cols < 3; cols++)
		{
			//printf("%d\t", arr[rows][cols]);

			// arr[i][j]; Assume arr[i] is x; x[j] -> *(x+j) -> *(a[i]+j)
			printf("%d\t", *(arr[rows] + cols)); 
		}
		printf("\n");
	}
	return 0;

}

