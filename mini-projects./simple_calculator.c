#include <stdio.h>

//function signatures
float sum(float , float );
float sub(float , float );
float mul(float , float );
float div(float , float );

//peforming the address operation
float sum(float n1, float n2)
{
    float result = n1 + n2;
    return result;
}
//peforming the subtraction operation
float sub(float n1, float n2)
{
	float result = n1 - n2;
    return result;
}
//peforming the multiplication operation
float mul(float n1, float n2)
{
	float result = n1 * n2;
    return result;
}
//peforming the multiplication operation
float div(float n1, float n2)
{
	float result = n1 / n2;
	return result;
	
}


int main()
{
    float num1, num2, result;
    char op, choice;
	
	do
	{

    //Reading the numbers from the user
    printf("enter two numbers : ");
    scanf("%f%f", &num1, &num2);

	//Reading the user's choice regarding the operation that user wants to perform
    printf("enter the operation you want to perform : ");
    printf("+ for addition, - for subtraction, * for multiplication, / for division : ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+' :
        result = sum(num1, num2);
        printf("Sum is %g\n", result);
        break;

        case '-' :
        result = sub(num1, num2);
        printf("Subtracted value is %g\n", result);
        break;

        case '*' :
        result = mul(num1, num2);
        printf("Multiplied value is %g\n", result);
        break;

        case '/' :
		if(num2 == 0)
		{
			printf("Division by zero is not allowed.\n");
		}
		else
		{
			result = div(num1, num2);
			printf("Divided value is %g\n", result);
		}
		break;

        default :
        printf("Please enter correct inputs (+,-,*,/).\n ");

    }
	
	//Ask user if they want to continue
	printf("Do you want to continue? (y/n): ");
	scanf(" %c", &choice);
	
	}while(choice == 'y'|| choice == 'Y');
	
	return 0;
}
