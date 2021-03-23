/*
Author: Mir Saeed Mozin
Creation Date: 23rd March 2021
Program purpose: To demonstrate an array with 10 integer elements initialization and printing their value 
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int arr[10]={5, 10, 15, 20, 25, 30, 35, 40, 45, 50}; //Declaring an array with integer data type and initializing it with 10 elements
	printf("The numbers are:\n");
	//For loop to print the numbers
	for (int i = 0; i < 10; ++i)
	{
		printf("Index [%d] = %d\n", i, arr[i]);
	}
	return 0; //Return function
}