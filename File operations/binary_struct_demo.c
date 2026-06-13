#include <stdio.h>

// Define a structure named Data with mixed data types
struct Data
{
    int num1;
    char oper;
    int num2;
    char str[10];
    float num3;
};

int main()
{
	// Initialize a struct instance with sample values
	struct Data d1 = {2, '+', 1, "is", 1.1};
	
	// Declare another struct to read data back from the file
	struct Data d2;
	
	// Declare a file pointer
	FILE *fp;
	
	// Open the file in read/write mode ("w+" creates/truncates the file)
	fp = fopen("text.txt", "w+");
	if(fp == NULL)
	{
		// If file opening fails, print error and exit
		fprintf(stderr, "Can't open input file text.txt! \n");
		return 1;
	}
	// Write the entire struct d1 to the file in binary format
	fwrite(&d1, sizeof(d1), 1, fp);
	
	// Move the file pointer back to the beginning
	rewind(fp);
	
	// Read the binary data back into struct d2
	fread(&d2, sizeof(d2), 1, fp);
	
	// Print the contents of d2 to verify successful read
	printf("%d %c %d %s %g \n", d2.num1, d2.oper, d2.num2, d2.str, d2.num3);
	
	// Close the file to release resources
	fclose(fp);
	
	return 0;
}
