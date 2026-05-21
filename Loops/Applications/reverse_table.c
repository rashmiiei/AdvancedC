/*program to print the reverse multiplication table of any number */

#include <stdio.h>

int main() 
{
    int table_of, limit, prod=0;
    
    // Ask the user which table to print
    printf("Which table would you like to print ? : ");
    scanf("%d", &table_of);
    
    // Ask the user how far to print the table (e.g., up to 1 or 10)
    printf("enter the limit : ");
    scanf("%d", &limit); // -> 5
    
    // Loop from 'limit' down to 1 to print the reverse table
    for(int i=limit; i>=1; i--)
    {
        prod = table_of * i;
        printf("%d * %d = %d\n", table_of, i, prod);
        
    }
    return 0;
}
