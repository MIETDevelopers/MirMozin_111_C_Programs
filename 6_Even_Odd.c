/*
Author: Mir Saeed Mozin
Creation Date: 17th March 2021
Program purpose: To check whether an entered number is even or odd
*/
#include<stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
	int number; //Integer variable declaration
	printf("Enter a number: "); //Printf function calling
	scanf("%d", &number); //Scanf function calling
	if (number%2==0) //If condition 
	{
		printf("%d is even", number);
	}
	else //Else condition
	{
		printf("%d is odd", number);
	}
	return 0; //Return function
}