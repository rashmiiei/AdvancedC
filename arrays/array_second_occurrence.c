/* find second occurence of 7 and print it's index */

#include <stdio.h>

int main()
{
    int arr[] = {4, 7, 2, 9, 7, 3};

    int i, count=0;

    for(i=0; i<6; i++)
    {
        if(arr[i] == 7)
        {
            count++;
        }
        if(count == 2)
        {
            printf("%d ", i);
            break;
        }
    }

    return 0;
}

