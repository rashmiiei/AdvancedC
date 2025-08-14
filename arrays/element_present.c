/* WAP to find whether a number is present or not */

#include <stdio.h>
int main()
{
    int arr[4] = {32, 45, 56, 88}, i, num, flag=0;
    
    printf("enter the number you want to search : ");
    scanf("%d", &num);
    
    for(i=0; i<4; i++)
    {
        if(arr[i] == num)
        {
            flag=1;
            break;
        }
    
    }
    if(flag)
    {
        printf("%d is found!!\n", num);
    }
    else
    {
        printf("Oops!! %d is not found!!!\n", num);
    }
    
    return 0;
    
}