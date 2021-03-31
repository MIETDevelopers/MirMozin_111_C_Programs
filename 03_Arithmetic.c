/*
Author: Mir Saeed Mozin
Creation Date: 16th March 2021
Program purpose: To make a simple arithmetic calculator performing Addition, Subtraction, Multiplication and Division
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
    char operator; //Character data type variable declaration
    double number1, number2; //Double data type variable declaration
    //Printf and scanf function calling
    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &operator);
    printf("Enter first number: \n");
    scanf("%lf", &number1);
	printf("Enter second number: \n");
	scanf("%lf", &number2);
    //Switch case for performing calculation and printing the result based on the entered operator and numbers
    switch (operator){
	    case '+': //Addition case
		printf("%.1lf + %.1lf = %.1lf", number1, number2, number1+number2);
		break;
	    case '-': //Subtraction case
		printf("%.1lf - %.1lf = %.1lf", number1, number2, number1-number2);
		break;
	    case '*': //Multiplication case
		printf("%.1lf * %.1lf = %.1lf", number1, number2, number1*number2);
		break;
	    case '/': //Division case
		printf("%.1lf / %.1lf = %.1lf", number1, number2, number1/number2);
		break;
	    default: //Default case if an incorrect operator is entered
        	printf("Error! Wrong operator");
    }
    return 0; 	//Return function
}
