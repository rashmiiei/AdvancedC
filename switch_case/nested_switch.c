/* Write a program that first asks the user to select an operation:
1. Arithmetic
2. Bitwise

If the user selects:
Arithmetic

Display:

1. Addition
2. Subtraction
3. Multiplication
4. Division

Take two integers and perform the selected operation.

Bitwise

Display:

1. AND
2. OR
3. XOR

Take two integers and perform the selected operation.

If the user enters an invalid choice at any stage, print:

Invalid Choice */

#include <stdio.h>
int main()
{
    int choice;
    printf("Enter the choice : \n");
    printf("1. Arithmetic 2. Bitwise \n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1 : printf("Arithmetic operation \n");
                 int ch, num1, num2;
                 printf("Enter the choice : \n 1. Addition 2. Subtraction 3.  Multiplication 4. Division \n ");
                 scanf("%d", &ch);
                 switch(ch)
                 {
                     case 1 : printf("Addition \n");
                              int sum=0;
                              printf("Enter the first number : ");
                              scanf("%d", &num1);
                              printf("Enter the second number : ");
                              scanf("%d", &num2);
                              sum = num1 + num2;
                              printf("Sum is %d \n", sum);
                              break;

                     case 2 : printf("Subtraction \n");
                              int sub=0;
                              printf("Enter the first number : ");
                              scanf("%d", &num1);
                              printf("Enter the second number : ");
                              scanf("%d", &num2);
                              sub = num1 - num2;
                              printf("Subtraction is %d \n", sub);
                              break;

                     case 3 : printf("Multiplication \n");
                              int mul=1;
                              printf("Enter the first number : ");
                              scanf("%d", &num1);
                              printf("Enter the second number : ");
                              scanf("%d", &num2);
                              mul = num1 * num2;
                              printf("Multiplication is %d \n", mul);
                              break;

                     case 4 : printf("Division \n");
                              float div;
                              printf("Enter the first number : ");
                              scanf("%d", &num1);
                              printf("Enter the second number : ");
                              scanf("%d", &num2);
                              div = (float)num1 / num2;
                              printf("Division is %g \n", div);
                              break;

                     default : printf("Invalid input!\n");
                               break;
                 }
                 break;
        case 2 : printf("Bitwise operation \n");
                 printf("1. AND operation 2. OR operation 3. XOR operation \n ");
                 int ch1, n, n1, n2;
                 printf("enter your choice : ");
                 scanf("%d", &ch1);

                 switch(ch1)
                 {
                     case 1 : printf("AND operation \n");
                              printf("enter the first number : ");
                              scanf("%d", &n1);
                              printf("enter the second number : ");
                              scanf("%d", &n2);
                              n = n1 & n2;
                              printf("Bitwise AND of %d and %d is %d \n", n1, n2, n);
                              break;

                     case 2 : printf("OR operation \n");
                              printf("enter the first number : ");
                              scanf("%d", &n1);
                              printf("enter the second number : ");
                              scanf("%d", &n2);
                              n = n1 | n2;
                              printf("Bitwise OR of %d and %d is %d \n", n1, n2, n);
                              break;

                     case 3 : printf("XOR operation \n");
                              printf("enter the first number : ");
                              scanf("%d", &n1);
                              printf("enter the second number : ");
                              scanf("%d", &n2);
                              n = n1 ^ n2;
                              printf("Bitwise XOR of %d and %d is %d \n", n1, n2, n);
                              break;

                     default : printf("invalid choice! \n");
                               break;
                 }
                 break;
        default : printf("Invalid input \n");
    }

    return 0;
}
