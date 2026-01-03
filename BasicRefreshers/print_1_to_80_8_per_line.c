#include <stdio.h>

int main()
{

   int i; //loop conter variable

   for(i=1; i<=80; i++) // Loop runs from 1 to 80
    {
      printf("%d\t", i); // Print the current number followed by a tab space
	  
      if(i % 8 == 0)  // If the number is divisible by 8, move to the next line
      {        
		printf("\n");
      } 
    }

   return 0;
}
