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
    
    //if we are changing the order in which the members are defined, 
    //then we have to mention which member takes what value
    
    struct Student s1 = {.name = "Rashmi", .id = 30, .address = "Jamshedpur"};
    //struct Student s1 = {30, "Rashmi", "Jamshedpur"};
    
    // dot(.) operator is used to access the members of a structure    
    printf("%d\n", s1.id); 
    printf("%s\n", s1.name);
    printf("%s\n", s1.address);
        
    
    return 0;
}