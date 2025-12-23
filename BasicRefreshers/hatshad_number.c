/* Harshad number (or Niven number) is an integer that is divisible by the sum of its digits.
eg : 18 -> 1+8 = 9 -> 18 % 9 == 0 */

#include <stdio.h>

int main()
{
    int num, rem, sum=0, original;
	
    printf("enter a number : ");
    scanf("%d", &num);

    original = num;

    while(num!=0)
    {
        rem = num%10;
        sum += rem; 
        num = num/10;
    }

    printf("sum of all digits is %d \n", sum);

    if(original % sum == 0)
    {
        printf("harshad's number \n");
    }
    else
    {
        printf("not !!\n");
    }

    return 0;
}
