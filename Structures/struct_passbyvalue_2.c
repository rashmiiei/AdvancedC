#include <stdio.h>

struct Student //structure definition
{
    int id;
    char name[20];
    char address[60];
    
};

// Collecting the structure in another structure
// return type will be a structure
struct Student data (struct Student s)
{
    s.id = 10;
    return s; // modifies the id field, and returns the updated structure
};

int main()
{
    struct Student s1; // Declare a Student structure variable
    
    // Call the function and assign the returned structure to s1
    s1 = data(s1);
    
    // Print the updated id field (should print 10)
    printf("%d\n", s1.id); 
    
    return 0;
    
}