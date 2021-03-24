/*
Author: Mir Saeed Mozin
Creation Date; 20th March 2021
Program purpose: To find the index of maximum value in an array
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int n, arr[100], maxIndex, maxNum=0; //Integer variable declaration
	//Printf and scanf function calling
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter %d numbers: \n", n);
	//For loop to take n inputs in the declared array
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	maxIndex = arr[0]; //Assuming that the first element is the largest
	//For loop to check the largest element and its index in the array
	for (int i = 0; i < n; ++i)
	{
		printf("Index [%d] = %d\n", i, arr[i]);
		if (maxNum < arr[i])
		{
			maxNum = arr[i];
			maxIndex = i;
		}
	}
	printf("The maximum number is %d at index: [%d]\n", maxNum, maxIndex); //For printing the maximum number and its index
	return 0; //Return function
} 
