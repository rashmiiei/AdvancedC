#include <stdio.h>

//Function Signatures
void bonjour();
void namaste();

//Function definition
void namaste()
{
    printf("Namaste! \n");
}
void bonjour()
{
    printf("Bonjour! \n");
}
int main()
{
    char ch;
    printf("enter i for indian and f for french : ");
    scanf(" %c", &ch);
    
    if(ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    
    return 0;
}