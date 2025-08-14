/* Write a C program that: Initializes an array of integers. Asks the user to enter a number to search for. 
Prints all the indices where this number occurs in the array.
If the number is not found at all, print a message stating that. */

#include <stdio.h>
int main()
{
  int array[6] = {2,3,4,5,4,7}, i, count=0, flag=0, num;
  
  printf("enter the number you want to search for : ");
  scanf("%d", &num);
  
  for(i=0; i<6; i++)
  {
      if(array[i] == num)
      {
          printf("Number found at index %d.", i);
          count++;
          flag=1;
      }
  }
  printf("\n");
  if(flag)
  {
      printf("Number occured %d times.\n", count);
  }
  else
  {
      printf("Number not found!\n");
  }
  
  return 0;
}



