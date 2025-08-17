#include <stdio.h>

void my_strcpy(char *, char * ); //Function signature
void my_strcpy(char *s1, char *s2) //Function to copy the string
{
    while(*s1 != '\0')
    {
        *s2 = *s1;
        s1++;
        s2++;
    }
    
    *s2 = '\0';
}
    
int main()
{
	char str1[50] , str2[50];
	int i=0;
	
	printf("Enter the string to be copied : ");
	scanf("%49[^\n]", str1);
	
    my_strcpy(str1, str2); // function call
    
	printf("Copied string is :  %s\n", str2);
	
	return 0;
}
