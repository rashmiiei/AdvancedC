#include <stdio.h>

//function signature
void my_hello_function();
void my_goodbye_function();

//Function definition of function myHelloFunction 
void my_hello_function()
{
    printf("hello \n");
}
//Function definition of function myGoodbyeFunction
void my_goodbye_function()
{
    printf("goodbye \n");
}

int main()
{
    //Fuction call
    my_hello_function(); 
    my_goodbye_function();
    return 0;
}