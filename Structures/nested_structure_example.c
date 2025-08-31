#include<stdio.h>
#include <string.h>

// Define a structure named 'College'
struct College
{
    // Nested structure for student details
    struct
    {
        int id;
        char name[20];
        char address[60];
    } student; 
    
    // Nested structure for faculty details
    struct
    {
        int id;
        char name[20];
        char address[60];
    } faculty;
};


int main()
{
    // Declare a variable 'member' of type 'struct College'
    struct College member;
    
    //Assign values to the nested student structure
    member.student.id = 10;
    strcpy(member.student.name , "Rashmi");
    strcpy(member.student.address , "Northen town, Jamshedpur");
    
    //Assign values to the nested faculty structure
    member.faculty.id = 11;
    strcpy(member.faculty.name , "Anusha");
    strcpy(member.faculty.address , "Emertxe, Bangalore");
    
    //Display student details
    printf("Student details : \n");
    printf("ID : %d\n", member.student.id);
    printf("Name : %s\n", member.student.name);
    printf("Address : %s\n", member.student.address);
    
    //Display Faculty details
    printf("Faculty details : \n");
    printf("ID : %d\n", member.faculty.id);
    printf("Name : %s\n", member.faculty.name);
    printf("Address : %s\n", member.faculty.address);
    
    
    return 0;
}