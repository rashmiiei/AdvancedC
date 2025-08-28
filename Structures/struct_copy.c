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
    
	//structure name does not represent address. 
	// No correlation with the arrays
    struct Student s2;
    s2 = s1; //we can copy a structure like this. 
             // all 84 bytes gets written to s2
    printf("%d\n", s1.id); 
    printf("%s\n", s1.name);
    printf("%s\n", s1.address);
    
    printf("\n");
    
    printf("%d\n", s2.id); 
    printf("%s\n", s2.name);
    printf("%s\n", s2.address);
        
    
    return 0;
}