/* This program reverses the string */
#include <stdio.h>

int main()
{
    int len=0, i=0;
    char str[50];
    
    //taking the user input
    printf("Enter the string : ");
    scanf("%49[^\n]", str); //using selective scanf
    
	//Finding the length of the string
    while(str[i] != '\0') //iterating through the string till I reach the null character
    {
        i++;
        len++;
    }
    
    //printf("Length of the string is %d.\n", len);
    
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
    
    printf("Reversed string is %s", str);
    return 0;    
}
