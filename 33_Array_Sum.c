/*
Author: Mir Saeed Mozin
Creation Date: 23rd March 2021
Program purpose: To print the sum of elements of an array with 10 integer elements
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int arr[10]; //Declaring an array of size 10 with integer data type
	int i, sum = 0;
	printf("Enter 10 numbers:\n");
	//For loop to take 10 inputs 
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);
	}			
	//For loop to print the numbers
	for (i = 0; i < 10; ++i)
	{
		sum = sum+arr[i];
	}
	printf("The sum of the elements is: %d", sum);
	return 0; //Return function
}