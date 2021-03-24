/*
Author: Mir Saeed Mozin
Creation Date; 15th March 2021
Program purpose: To calculate the sum of two entered numbers
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int number1, number2, sum; //Integer variable declaration
	scanf("%d %d", &number1, &number2); //Scanf function calling for taking 2 inputs
	sum=number1+number2;
	printf("The Sum of the two numbers = %d", sum); //For printing the calculated sum
	return 0; //Return function
}