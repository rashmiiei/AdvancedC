/* It traverses the string and returns a pointer to the first occurrence of the specified character, or NULL if the character is not found. */

#include <stdio.h>

char *my_strchr(char *, char );

char *my_strchr(char *str, char ch)
{
    char *sptr = str;
    while(*sptr != '\0')
    {
        if(*sptr == ch)
        {
            return sptr; // Return address of the first matching character
        }
        sptr++;
    }
    return NULL; // Character was not found
}


int main()
{
    char str[20];
    printf("enter a string : ");
    scanf("%19[^\n]", str);

    char ch;
    printf("enter a character : ");
    scanf(" %c", &ch);

	//Store the address returned by my_strchr()
    char *result = my_strchr(str, ch);

    if(result != NULL)
    {
		//%p prints the address stored in result
		//%p expects a void pointer, so cast result from char * to void *
        printf("Found at %p \n", (void *)result);
    }
    else
    {
        printf("Character not found \n");
    }

    

    return 0;

}
