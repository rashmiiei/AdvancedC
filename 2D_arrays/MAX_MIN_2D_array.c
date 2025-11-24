/*This code helps in finding the minimum and maximum element in a 2D array 

OUTPUT SAMPLE : 
Enter the rows and columns in an array : 2 3
Enter the element at [0][0] : 21
Enter the element at [0][1] : 32
Enter the element at [0][2] : 2 
Enter the element at [1][0] : 43
Enter the element at [1][1] : 42
Enter the element at [1][2] : 56
Maximum is 56 and Minimum is 2   

*/

#include <stdio.h>
int main()
{
    int rows, cols;
    
    // Taking user input to enter rows and columns
    printf("Enter the rows and columns in an array : ");
    scanf("%d%d", &rows, &cols);
    
    int i,j;
    
    int arr[rows][cols]; // Declaring a variable-size 2D array
    // printf("Enter the array elements : ");
    
    // Taking input for each element of the array
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("Enter the element at [%d][%d] : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Initialize max and min with the first element of the array
    int max = arr[0][0];
    int min = arr[0][0];
    
    // Loop through each row
    for(i=0; i<rows ; i++)
    {
        // Loop through each column in the current row
        for(j=0; j<cols; j++)
        {
            // If the current element is greater than max, update max
            if(arr[i][j] > max)
            {
               max = arr[i][j];
            }
            // If the current element is less than min, update min
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    
    printf("Maximum is %d and Minimum is %d\n", max, min);
    
    return 0;

}
