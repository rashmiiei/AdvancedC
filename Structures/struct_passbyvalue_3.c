#include <stdio.h>

struct Student //structure definition
{
    int id;
    char name[20];
    char address[60];
    
};

// collecting in a structure variable s
// since we are returning an integer velue, return type is int
int data (struct Student s)
{
    // We're updating only the id field, not the entire structure
    s.id = 10; 
    return s.id; //we can return the value that we have updated
};

int main()
{
    struct Student s1; // Declare a Student structure variable
    
    //collecting the returned variable in a specific member field instead of a complete structure
    s1.id = data(s1);
    
    
    printf("%d\n", s1.id); 
    
    return 0;
    
}