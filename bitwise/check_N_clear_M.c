/* WAP to check N th bit is set or not, If yes, clear the M th bit */
/* Sample Input : 1: Enter the number: 19
                  Enter 'N': 1
                  Enter 'M': 4
               2: Enter the number: 19
                  Enter 'N': 2
                  Enter 'M': 4
Sample Output: 1: Updated value of num is 3 
               2: Updated value of num is 19  */
			   
#include <stdio.h>

int main()
{
    int num, M, N;
    // Prompt user to enter an integer
    printf("Enter the number: ");
    scanf("%d", &num);
    // Prompt user to enter bit positions M and N
    printf("Enter the value of M and N: ");
    scanf("%d%d", &M, &N);

    // bit positions should be within the range of 0 t0 31
    if (M < 0 || M > 31 || N < 0 || N > 31)
    {
        printf("Invalid input\n");
    }
    else
    {
        // Check if the Nth bit is set (i.e., equals 1)
        if (num & (1 << N))
        {
            // If yes, clear the Mth bit 
            num = num & ~(1 << M);
        }
        printf("Updated value of num is %d\n", num);
    }

    return 0;
}