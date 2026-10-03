#include <stdio.h>

int main()
{
    int arr[] = {3, 7, 3, 5, 7, 7};

    int i=0, size;

    size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];

    int count=0;
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
