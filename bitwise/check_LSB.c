/* Write a C program to check Least Significant Bit (LSB) of a number is set or not. */
#include <stdio.h>

int main() {
   int num;
   
   // Prompt the user to enter a number
   printf("Enter a number : ");
   scanf("%d", &num);
   
   // Use bitwise AND operator to check if the Least Significant Bit (LSB) is set
   // If LSB is set, num & 1 will be non-zero (true)
   if (num & 1)
   {
       // LSB is set (i.e., the number is odd)
       printf("LSB of %d is set(1) \n", num);
   }
   else
   {
       // LSB is not set (i.e., the number is even)
       printf("LSB of %d is unset(0) \n", num);
   }
   
   return 0;
}