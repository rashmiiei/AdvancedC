/* This program calculates the length of the string */

#include <stdio.h>

int main()
{
    int len=0, i=0;
    char str[20];
    
    //taking the user input
    printf("Enter the string : ");
    scanf("%19[^\n]", str); //using selective scanf
    
    while(str[i] != '\0') //iterating rhrough the string till I reach the null character
    {
        i++;
        len++;
    }
    
    printf("Lenth of the string is %d.\n", len);
    
    return 0;
    
}