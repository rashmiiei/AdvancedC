/* This code explains how to access members of a structure using structure pointer */

#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    char address[60];
};

int main()
{
    struct Student s1;
    
    //storing the address of structure s1 in the pointer sptr 
    //whose datatype is struct Student
    struct Student *sptr = &s1; 
    
    //Arrow(->) operator is used when we have to acces sthe member of a structure 
    //using pointer
    sptr -> id = 10;
    
    //(*sptr).id = 10; 
    //both are valid but arrow operator is convenient and readable
    printf("%d", s1.id);

    return 0;
}