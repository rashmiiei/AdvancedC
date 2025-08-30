include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};

//we are not returning any value,hence data type is void
//collecting all 84 bytes into another structure 
// Changes made here won't affect the original structure in main
void data (struct Student s)
{
    s.id = 10; // Assign 10 to the id field (only modifies the copy)
};

int main()
{
    struct Student s1;
    
    // function call, pass by value method, changes won't reflect in s1
    // recommended for smaller structures
    //we are not collecting it into any variable 
    data(s1); 
    printf("%d\n", s1.id); // garbage value will be printed

    return 0;

}
