#include <stdio.h>

//this is the structure definition
//memory gets allocated only when you assign a variable name, in this case s1
struct Student 
{
        int id;
        char name[20];
        char address[60];
};
    
int main()
{
    struct Student s1 = {30, "Rashmi", "Jamshedpur"};
    
    printf("Structure starts at %p\n", &s1);
    printf("Member id is at %p\n", &s1.id);
    printf("Name is at %p\n", s1.name); //name is an array and is reperesenting the base address
    printf("Address is at %p\n", s1.address); //address reperesents the base address
    
    return 0;
}