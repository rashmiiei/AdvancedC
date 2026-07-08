#include <stdio.h>

int add(int x, int y)
{
    return x+y;
}
int main()
{
    int (*fptr)(int , int);
    fptr = add;

    printf("%d \n", add(10, 20));
    printf("%d \n", fptr(10, 20));
    printf("%d \n", (*fptr)(10,20));

    return 0;
}
