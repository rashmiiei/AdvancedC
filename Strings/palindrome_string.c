/* This code checks whether the string is a palindrome or not */
#include <stdio.h>

int main()
{
    char str[50], original[50];
    int i = 0, len = 0;

    printf("Enter the string: ");
    scanf("%49[^\n]", str);

    // Copying the string to original
    while(str[i] != '\0') //traversing through the string
    {
        original[i] = str[i];
        i++;
    }
    original[i] = '\0'; //terminating the copied string

    //finding the length of the string
    while(str[len] != '\0')
    {
        len++;
    }
    
    printf("length is %d.\n", len);

    // Reversing the string
    int start = 0, end = len - 1;
    char temp;
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Original string is: %s\n", original);
    printf("Reversed string is: %s\n", str);

    // Comparing both strings
    i = 0;
    while(original[i] == str[i] && original[i] != '\0' && str[i] != '\0')
    {
        i++;
    }

    if(original[i] == '\0' && str[i] == '\0')
    {
        printf("String is a palindrome.\n");
    }
    else
    {
        printf("String is not a palindrome.\n");
    }

    return 0;
}