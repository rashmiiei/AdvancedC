#include <stdio.h>

// Function declaration: takes an integer as input
void print_helloworld(int );

// Function definition: prints "Hello World" 'count' times using recursion
void print_helloworld(int count)
{
    // Base case: if count reaches 0, stop recursion
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("Hello World \n");
		
        // Recursive call with decremented count
        print_helloworld(count - 1);
        
    }
}
int main()
{
    // Call the function to print "Hello World" 10 times
    print_helloworld(10);
    
    return 0;
}