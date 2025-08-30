#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int id;
    char *name;
    char *address;
    
};

struct Student data(void)
{
    struct Student s;
    
    // Dynamically allocate memory for name and address
    s.name = malloc(30 * sizeof(char));      // Allocating 30 bytes for name
    s.address = malloc(150 * sizeof(char));  // Allocating 150 bytes for address
    
    // Check if memory allocation was successful
    if(s.name == NULL || s.address == NULL)
    {
    printf("Memory allocation failed\n");
    exit(1); // Exit the program if allocation fails
    }
    
    //Assigning values to structure fields
    s.id = 10;
    
    // Copy string into allocated memory
    s.name = strcpy(s.name, "Rashmi"); // Copies string into allocated memory; direct assignment would point to read-only memory
    s.address = strcpy(s.address, "jamshedpur"); // Copies string into allocated memory; ensures safe use of malloc'd space
    
    return s; //Returning the structure
};

int main()
{
    struct Student s1;
    s1 = data();
    
    //print the student details
    printf("ID is : %d\n", s1.id);
    printf("Name is : %s\n", s1.name);
    printf("Address is : %s\n", s1.address);
    
    // Free dynamically allocated memory
    free(s1.name);
    free(s1.address);
    
    
    return 0;
}