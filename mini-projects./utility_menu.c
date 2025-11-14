#include <stdio.h>

int main()
{
   
   while(1) 
   {
   printf("-----------------MENU----------------\n");
   printf("1. Add numbers \n");
   printf("2. Find square and cube of a number \n");
   printf("3. Check odd or even \n");
   printf("4. Find factorial \n");
   printf("5. Find maximum \n");
   printf("6. Palindrome check \n");
   printf("7. Exit \n");

   int choice;
   printf("Enter the choice(1 to 7) : ");
   scanf("%d", &choice);
   switch(choice)
   {
        case 1: 
		{ 
            int num1, num2;
            printf("enter 2 numbers : ");
            scanf("%d%d", &num1, &num2);

            printf("Sum is %d \n ", num1+num2);
        }

            break;
		case 2: 
		{
			float num;
			printf("enter a number : ");
			scanf("%f", &num);
			
			printf("Press 1 for square \n");
			printf("Press 2 for cube \n");
			
			int ch;
			printf("Enter the choice (1 or 2) : ");
			scanf("%d", &ch);
			switch (ch)
			{
				case 1: 
					float sq;
					sq = num * num;
					printf("Square of %g is %g \n", num , sq);
					break;
				case 2:
					float cu;
					cu = num * num * num;
					printf("Cube of %g is %g \n", num , cu);
			}
		}
			break;
		case 3: 
		{
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
		}
			break;
		case 4: 
		{
			int num, i, fact=1;
			printf("enter the number : ");
			scanf("%d", &num);
			
			for(i=1 ; i <= num; i++)
			{
				fact = fact * i;
			}
			printf("Factorial of %d is %d \n", num, fact);
		}
			break;
		case 5: 
		{
			int num1, num2, num3;
			printf("enter any three numbers : ");
			scanf("%d%d%d", &num1, &num2, &num3);
			
			if((num1 > num2) && (num1 > num3))
			{
				printf("%d is greater \n", num1);
			}
			else if (((num2 > num1) && (num2 > num3)))
			{
				printf("%d is greater \n", num2);
			}
			else
			{
				printf("%d is greater \n", num3);
			}
		}
			break;
		case 6: 
		{
			int num, original, rem, rev=0;
			printf("Enter the number : ");
			scanf("%d", &num);
			
			original = num;
			
			while(num != 0)
			{
				rem = num % 10;
				rev = rev*10 + rem;
				num = num / 10;
			}
			
			if(original == rev)
			{
				printf("Palidrome number \n");
			}
			else
			{
				printf("NOt a palindrome number \n");
			}
		}
			break;
		case 7 : printf("exiting the program \n");
		      break;
			
		default: 
			printf("Please enter the correct input(1 - 7) \n");
   }
   }
   

	return 0;
}
