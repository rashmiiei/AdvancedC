/* WAP to count Even & Odd Numbers : Given an array of integers, count and print how many numbers are even and how many are odd */
#include <stdio.h>
int main()
{
    int arr[5] = {23, 33, 34, 55, 67}, odd=0, even=0;
    
    for(int i=0; i<5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    
    printf("Odd numbers are %d and even numbers are %d\n", odd, even);
    return 0;
}