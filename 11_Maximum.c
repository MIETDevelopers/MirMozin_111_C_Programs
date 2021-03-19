/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To find the maximum of n numbers using for loop
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int arr[10]; //Array of size 10 declared with integer data type
	printf("Enter 10 numbers: "); //Printf function calling		
	//For loop to take 10 inputs in the declared array
	for (int i = 0; i < 10; ++i)
	{
	    scanf("%d", &arr[i]);
	}
	//For loop to check the largest number in the array
	for (int i = 1; i < 10; ++i)
	{
	    if (arr[0] < arr[i])
	        arr[0] = arr[i];
	}
	printf("The largest number is: %d", arr[0]); //For printing the maximum number
	return 0; //Return function
} 