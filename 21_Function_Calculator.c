/*
Author: Mir Saeed Mozin
Creation Date: 3rd April 2021
Program Purpose: To make a simple calculator using functions
*/
#include <stdio.h>  	//Pre-processor directive to include standard input and output functions header file
int calculator(int num1, int num2, char operator){
	//Loop for printing the result based on user inputs
	if(operator == '+')
		printf("Addition = %d ", num1+num2);
	else if(operator == '-')
		printf("Subtraction = %d ", num1-num2);
	else if(operator == '*')
		printf("Multiplication = %d ", num1*num2); 
	else
		printf("Incorrect operator!");
}
//Main function
void main(){
	int num1, num2;
	char operator;
	//For first number
	printf("Enter first number: ");
	scanf("%d", &num1);
	//For second number
	printf("Enter second number: ");
	scanf("%d", &num2);
	//For operator
	printf("Operators:\n('+' for addition!)\n('-' for subtraction!)\n('*' for multiplication!)\nEnter an operator: ");
	scanf(" %c", &operator);
	calculator(num1, num2, operator); 	//Function calling
}