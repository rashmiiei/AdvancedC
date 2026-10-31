#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int first, second, i;

    if(arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }

    for(i=2; i<5; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    printf("Second largest element is %d\n", second);

    return 0;
}
