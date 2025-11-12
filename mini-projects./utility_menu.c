#include <stdio.h>

int main()
{
   printf("-----------------MENU----------------\n");
   printf("1. Add numbers \n");
   printf("2. Find square and cube of a number \n");
   printf("3. Check odd or even \n");
   printf("4. Find factorial \n");
   printf("5. Find maximum \n");
   printf("6. Palindrome check \n");

   int choice;
   switch(choice)
   {
        case 1: 
            int num1, num2;
            printf("enter 2 numbers : ");
            scanf("%d%d", &num1, &num2);

            sum(num1, num2);
            printf("Sum is %d ", sum);

            break;
		case 2:
			float num;
			printf("enter a number : ");
			scanf("%f", &num);
			
			printf("Press 1 for square \n");
			printf("Press 2 for cube \n");
			
			int ch;
			switch (ch)
			{
				case 1: 
					float sq;
					sq = num * num;
					printf("Square of %f is %f \n", num , sq);
					break;
				case 2:
					float cu;
					cu = num * num * num;
					printf("Cube of %f is %f \n", num , cu);
			}
		case 3:
			int num;
			printf("enter the number  : ");
			scanf("%d", &num);
			if(num%2 == 0)
			{
				printf("Even number \n");
			}
			else
			{
				printf("Odd number \n");
			}
			break;
		case 4:
			int num;
			printf("enter the number : ");
			scanf("%d", &num);
			
			
			
					
						

   return 0;
}

