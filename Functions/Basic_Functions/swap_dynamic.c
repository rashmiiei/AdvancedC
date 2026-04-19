/* swap two numbers using pass by reference method and by allocating the memory dynamically */

#include <stdio.h>
#include <stdlib.h>

//function signatures
void swap(int *, int *);

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main() 
{
    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    
    printf("enter the first number : ");
    scanf("%d", num1);
    
    printf("enter the second number : ");
    scanf("%d", num2);
    
    printf("before swapping : ");
    printf("num1 is %d and num2 is %d \n", *num1, *num2);
    
    swap(num1, num2); //function call
    
    printf("after swapping : ");
    printf("num1 is %d and num2 is %d \n", *num1, *num2);

    free(num1);
    free(num2);
    
    return 0;
}