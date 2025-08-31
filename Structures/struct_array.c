#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};

int main()
{
    struct Student s[5]; // Declare an array to store details of 5 students
    int i;

    // Taking user input for each student
    for(i=0; i<5; i++)
    {
        printf("Enter details for student %d:\n", i+1);
        
        // Input student ID
        printf("ID : ");
        scanf("%d", &s[i].id);
        getchar(); //clears newline from buffer
        
        // Input student name
        printf("Name : ");
        
        // Reads a line of text from standard input and stores it in s[i].name
        // Arguments:
        // 1. s[i].name         → The destination buffer where the input string will be stored
        // 2. sizeof(s[i].name) → Maximum number of characters to read, including the null terminator '\0'
        // 3. stdin             → The input stream to read from (standard input, typically the keyboard)
        fgets(s[i].name, sizeof(s[i].name), stdin);
        
        // Input student address
        printf("Address : ");
        fgets(s[i].address, sizeof(s[i].address), stdin);
        
        printf("\n"); // Add spacing between entries
    }
    
     // Displaying all student details
    printf("Student Details : \n");
    for(i=0; i<5; i++)
    {
        printf("Student %d : \n", i+1);
        printf("ID is %d\n", s[i].id);
        printf("Name is %s\n", s[i].name);
        printf("Address is %s\n", s[i].address);
    }   
    

    return 0;
}