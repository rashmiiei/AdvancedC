#include <stdio.h>

struct Student // defining the structure variable
{
    int id;
    char name[20];
    char address[150];

};

// return type is void because we ae not returning anything
// we are collecting the structure address in a structure pointer sptr 
void data (struct Student *sptr) //function definition
{
    sptr->id = 10; //using the arrow operator to access the structure field
    
};

int main()
{
    struct Student s1;
    
    // pass by reference method of function call
    // recommended for larger structures
    // Sending the address of structure to another function
    data(&s1); 
    
    printf("%d\n", s1.id);
    
    return 0;

}

