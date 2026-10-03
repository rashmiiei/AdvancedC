#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 7, 2, 9, 5};

    int i=0, size;

    size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];

    int count=1;
    for(i=0; i< size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            count=1;
        }
        else if(arr[i] == max)
        {
            count++;
        }
    }
   
    printf("max appears %d times \n", count);
    
    

    return 0;
}
