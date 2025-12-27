#include <stdio.h>

int main()
{
    int num, i, foundPrime=1;
    printf("enter a number : ");
    scanf("%d", &num);

    if(num == 0 || num == 1)
    {
        printf("not composite  \n");
    }
    else
    {
        for(i=2; i < num; i++)
        {
            if(num % i == 0)
            {
                foundPrime=0;
                break;
            }
        }    

		if(foundPrime)
		{
			printf("%d is a prime \n", num);
		}
		else
		{
			printf("%d is a composite \n", num);
    
    	}
    }

    return 0;
}
