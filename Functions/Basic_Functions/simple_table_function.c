#include <stdio.h>
// Function declaration: defines that 'table' takes an integer argument
void table(int ); //function signature

// Function definition: prints the multiplication table of the given number up to 10
void table(int n)
{
    int i;
    
    // Loop from 1 to 10 to generate the table
    for(i=1; i<=10; i++)
    {
        printf("%d \n", n*i);
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    // Call the function to print the multiplication table
    table(n); 
    return 0;
}