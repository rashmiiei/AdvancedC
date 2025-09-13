/*WAP to print prime numbers in a range from 3 to 30*/
#include <stdio.h>

int main() 
{
    // 3 se 30 tak har number ke liye loop chalayenge
    for(int i=3; i<=30; i++) 
    {
        int isPrime = 1;  // Assume karte hain ki number prime hai

        // Check for factors from 2 to num - 1
        for(int factor = 2; factor < i; factor++) 
        {
            // Agar i kisi factor se divide ho jata hai, toh prime nahi hai
            if(i % factor == 0) 
            {
                isPrime = 0;  // Prime nahi hai
                break; // Ek factor mil gaya, toh loop se bahar aa jao
            }
        }

        // Agar koi factor nahi mila, toh number prime hai
        if(isPrime) 
        {
            printf("%d ", i); // Prime number ko print karo
        }
    }

    printf("\n");  // New line after printing all primes
    return 0;
}