/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To calculate factorial of entered number using recursion
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
float multiplyNumbers(int n);
int main(){ //Main function
	int n;
    //Printf and Scanf function calling
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	printf("\nFactorial of %d = %.0f", n, multiplyNumbers(n)); //For printing the factorial of the entered number
	return 0; //Return function
}
float multiplyNumbers(int n){ //Calculation for factorial
	if (n>=1)
    	return n*multiplyNumbers(n-1);
	else
    	return 1;
}