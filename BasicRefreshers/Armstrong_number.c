#include <stdio.h>

int main()
{
    int num, temp_var, digit=1, count=0, i, sum=0;
    
    // Prompt user to enter a number
    printf("Enter the number : "); // Example input: 153
    scanf("%d", &num);
    
    // Store the number in a temporary variable for digit counting
    temp_var = num;
    
        // Count the number of digits in the input number
    while( temp_var != 0)
    {
        temp_var /= 10; // Remove last digit
        count++;        // Increment digit count
    }
    //printf("No. of digits : %d \n", count); 
    
    temp_var = num; // Reinitialize temp_var to reuse it for digit extraction
    
    // Calculate the sum of each digit raised to the power of 'count'
    while(temp_var != 0)
    {
        digit  = temp_var % 10; // Extract the last digit
        
        int power=1;
        
        // Calculate digit^count using a loop
        for(i=0; i<count; i++)
        {
            power *= digit; 
        }
        
        sum += power; // Add the powered digit to the sum
        temp_var = temp_var / 10; // Remove the last digit
    }
    
    // Check if the calculated sum equals the original number
    if(sum == num) // 153 == 153
    {
        printf("Armstrong number \n");
    }
    else
    {
        printf("Not an Armstrong number \n");
    }
    
    return 0;
}