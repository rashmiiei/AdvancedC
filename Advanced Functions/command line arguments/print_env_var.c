/* WAP to print all the environmental variables */

#include <stdio.h>
int main(int argc, char **argv, char **envp) 
{
    int i;
    
    // Loop through envp until NULL is encountered
    for(i=0; envp[i] != NULL; i++)
    {
        printf("%s", envp[i]); // Print each environment variable string
    }

    return 0;
}