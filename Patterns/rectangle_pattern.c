/* This code tries to print a rectangle pattern 
	* * * * * 
	* * * * * 
	* * * * * 
	* * * * *
*/
#include <stdio.h>
int main()
{
    int rows, cols; // Variables to control row and column loops
    
    // Outer loop for rows (1 to 4)
    for(rows=1; rows <= 4; rows++)
    {
        // Inner loop for columns (1 to 5)
        for(cols=1; cols <= 5; cols++)
        {
            printf("* "); // Print a star followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
