/*This program calculates the file size by using ftell */

#include <stdio.h>
int main()
{
    FILE *fp; // Declare a file pointer
    	
	// Open the file "text.txt" in read mode
    fp = fopen("text.txt", "r");
	if(fp == NULL)
	{
	printf("FError opening file \n");
	return 1;
	}
	
	// Move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);
	
	// Use ftell to get the current position of the file pointer
	// Since we're at the end, this gives us the total file size in bytes
    printf("File's size is %ld \n", ftell(fp));
	
	// Close the file to release resources
    fclose(fp);
    return 0;
}
