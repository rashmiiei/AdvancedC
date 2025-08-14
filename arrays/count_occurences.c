/*Search for all occurrences in an array */

#include <stdio.h>
int main()
{
    int arr[6] = {4, 7, 4, 9, 4, 9}, i, num, count=0;
    
    printf("enter the number you want to search : ");
    scanf("%d", &num);
    
    for(i=0; i<6; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    
    }
    printf("Number of occurences is %d times.\n", count);
    
    return 0;
    
}