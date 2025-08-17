/*This program copies the string into another string */

#include <stdio.h>

int main()
{
	char str1[50] , str2[50];
	int i=0;
	
	printf("Enter the string to be copied : ");
	scanf("%49[^\n]", str1);
	

	while(str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	
	str2[i] = '\0';
	
	printf("Copied string is :  %s\n", str2);
	
	return 0;
}
