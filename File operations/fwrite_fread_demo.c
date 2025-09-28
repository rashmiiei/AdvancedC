#include <stdio.h>
int main()
{
	int num1, num2, num3, num4;
	FILE *fp;
	
	fp = fopen("text.txt", "w+");
	if(fp == NULL)
	{
		fprintf(stderr , "can't open input file text.txt! \n");
		return 1;
	}
	
	// Take two integers as input from user
	scanf("%d%d", &num1, &num2);
	
	// Write the two integers to the file in binary format
	fwrite(&num1, sizeof(num1), 1, fp);
	fwrite(&num2, sizeof(num2), 1, fp);
	
	// Rewind the file pointer to the beginning
	rewind(fp);
	
	// Read the two integers back from the file
	fread(&num3, sizeof(num3), 1, fp);
	fread(&num4, sizeof(num4), 1, fp);
	
	// Print the values read from the file
	printf("%d %d\n", num3, num4);
	
	// Close the file
	fclose(fp);
	
	return 0;
}

	
	
	
	