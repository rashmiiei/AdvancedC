/* This program calculates the length of the string using a pointer */

#include <stdio.h>

int main()
{
    int len=0, i=0;
    char str[20];
    
    char *ptr = str; //Assigning the base address of the string to the pointer
    
    
    //taking the user input
    printf("Enter the string : ");
    scanf("%19[^\n]", str);
    
    while(*ptr) //traversing through the pointer till I reach null.
    {
        ptr++;
        len++;
    }
    
    printf("Lenth of the string is %d.\n", len);
    
    return 0;
    
}