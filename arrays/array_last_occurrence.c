/* Find the last occurence of a given element in an array */

#include <stdio.h>

int main()
{
    int arr[] = {4, 7, 2, 9, 7, 3, 7};
    int target = 7, last_index = -1, i;

    for(i=0; i<7; i++)
    {
        if(arr[i] == target)
        {
            last_index = i;
        }
    }

    printf("Last index of %d is %d \n", target, last_index);

    return 0;
}
