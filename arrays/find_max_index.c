#include <stdio.h>

int main()
{
    int arr[] = {4, 7, 2, 9, 5};

    int i=0, size;

    size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];

    int index;
    for(i=0; i< size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index = i; //save the index value here
        }
    }

    printf("max is %d and occurs at %d \n", max, index);
    
    

    return 0;
}
