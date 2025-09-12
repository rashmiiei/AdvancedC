#include <stdio.h>

int main()
{
    int num, result = 1, range;
    char choice; // Variable to store user's choice to repeat

	// Start of do-while loop to allow repeated execution
    do
    {
	// Prompt user to enter the number for which table is to be generated
    printf("Enter the number : ");
    scanf("%d", &num);

	// Prompt user to enter the range up to which table should be printed
    printf("Enter the range : ");
    scanf("%d", &range);

	// Loop to print multiplication table from 1 to 'range'
    for(int i=1; i<=range; i++)
    {
        result = num * i;
        printf("%d * %d = %d \n", num, i, result); 
    }
    
	// Ask user if they want to run the program again
    printf("Do you want to run again ? (y/n) : ");
    scanf(" %c", &choice); // Note: space before %c to consume newline character
    
    } while(choice == 'Y' || choice == 'y'); // Repeat if user enters 'y' or 'Y'

   return 0;
} 
