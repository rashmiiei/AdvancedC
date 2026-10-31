#include <stdio.h>

int main()
{
    int arr[] = {12, 7, 20, 15, 18};
    int first, second, third, i;

    first = second = third = 0;

    for(i=0; i<5; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    
        printf("Third largest element is %d \n", third);


        
    return 0;
}
