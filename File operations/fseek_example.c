#include <stdio.h>
int main()
{
    FILE *fp; // File pointer to handle file operations
    char ch;  // Variable to store characters read from the file

	// Open the file "text.txt" in read mode
    fp = fopen("text.txt", "r");
    if(fp == NULL)
    {
		// Error handling in case the file doesn't open
        printf("Error opening file\n");
        return 1;
    }

	// Move the file pointer to the 7th byte (offset 6 from the beginning)
	//after printing the character, pointer will move ahead to one character always	
    fseek(fp, 6, SEEK_SET);
    ch = getc(fp);
    putchar(ch); //G

	// Move the file pointer 3 bytes backward from the current position
    fseek(fp, -3, SEEK_CUR);
    ch = getc(fp);
    putchar(ch); //E

	// Move the file pointer 4 bytes forward from the current position
    fseek(fp, 4, SEEK_CUR);
    ch = getc(fp);
    putchar(ch); //J

	//Close the file to release the resources
    fclose(fp);
    return 0;
}
