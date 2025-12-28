#include <stdio.h>

int main()
{
    int num, rem,rev=0, sum=0, original_num, findFive=0;

    printf("enter the num : ");
    scanf("%d", &num);

    original_num = num;

    if(num <= 0)
    {
        printf("enter a positive number  \n");
    }
    else
    {

        //check whether number is palindrome or not and also check sum is odd or even
        while(num!=0)
        {
            rem = num%10;
            if(rem==5)
            {
                findFive=1;
            }
            rev = rev * 10 + rem;
            sum +=rem;
            num = num/10;
        }

        if(findFive)
        {
            printf("%d has 5 \n", original_num);
        }   
        else
        {
            printf("%d does not have 5 in it \n", original_num);
        }   

        if(sum % 2 == 0)
        {
            printf("sum of all the digits is even \n");
        }   
        else
        {
            printf("sum of all the digits is odd \n");
        }   


        if(original_num == rev)
        {
            printf("palindrome number \n");
        }
        else
        {
            printf("not a palindrome number \n");
        }
    }

    return 0;
}
