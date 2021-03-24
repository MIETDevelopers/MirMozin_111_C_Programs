/*
Author: Mir Saeed Mozin
Creation Date: 17th March 2021
Program purpose: To check whether an entered number is even or odd
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int number; //Integer variable declaration
	//Printf and Scanf function calling
	printf("Enter a number: "); 
	scanf("%d", &number); 
	if (number%2==0) //If else for printing if the number is even or odd 
	{
		printf("%d is even", number);
	}
	else
	{
		printf("%d is odd", number);
	}
	return 0; //Return function
}