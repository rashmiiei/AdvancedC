/* This code is used to chaeck whether an number or a string is palindrome or not */

#include <stdio.h>
int main()
{
    int choice;
    char again;
	// Loop to allow repeated checks until user decides to exit
    do
    {
	printf("-------PALINDROME CHECKER---------\n");
	printf("Enter your choice : \n");
	printf("Enter 1 for Number checker \n");
	printf("Enter 2 for String checker \n");
	
	
	printf("Enter your choice :");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: {
				// Initializing the variables
                int num, original, reversed=0, remainder;
				printf("Enter the number to be checked : ");
				scanf("%d", &num);
				
				original = num;
				
				// Reverse the number
				while (num!=0)
				{
					remainder = num%10;
					reversed = reversed * 10 + remainder;
					num /= 10;
				}
				
				// Check if original and reversed numbers are equal
				if(original == reversed)
				{
					printf("%d is a palindrome\n", original);
				}
				else
				{
					printf("%d is not a palindrome\n", original);
				}
				break;
            }
				
		case 2: {
				// Initializing the variables
                char str[50], original_string[50];
				printf("Enter the string to be checked : ");
				scanf(" %49[^\n]", str);
				
				// Calculate length of the string
				int len=0,i=0;
				while(str[i] != '\0')
				{
					i++;
					len++;
				}
				//printf("The length of the string is %d\n", len);
				
				// Copy original string for comparison
				i=0;
				while(str[i] != '\0')
				{
					original_string[i] = str[i];
					i++;
				}
				original_string[i] = '\0';
				//printf("Original string is %s\n", original_string);
				
				// Reverse the string using two-pointer technique
				int start=0, end = len-1;
				char temp;
				while(start<end)
				{
					temp = str[start];
					str[start] = str[end];
					str[end] = temp;
					
					start++;
					end--;
				}
				
				//printf("Reversed string is %s\n", str);
				
				//Comparing reversed string with the original
				i=0;
				while(original_string[i] == str[i] && original_string[i] != '\0' && str[i] != '\0')
				{
					i++;
				}
				if(original_string[i] == '\0' && str[i] == '\0')
				{
					printf("String is a palindrome.\n");
				}
				else
				{
					printf("String is not a palindrome.\n");
				}		
				
				break;
            }
		default : printf("Invalid choice !\n");
	}	
	
	printf("Do you want to check again ?(y/n) \n");
	scanf(" %c", &again);
    
	
	}while(again == 'y' || again == 'Y');
	
	
	return 0;
}