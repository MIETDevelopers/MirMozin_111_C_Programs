/*
Author: Mir Saeed Mozin
Creation Date; 19th March 2021
Program purpose: To find the maximum of n numbers using for loop
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int num, n, max=0; 
 	//Printf and Scanf function calling
  	printf("Enter the number of elements: ");
  	scanf("%d", &n); 
    for(int i=0; i<n; i++)//For loop to store the largest number
    {
    	scanf("%d", &num);
		if(num > max)
		{
			max = num;
		}
	}
 	printf("\nThe largest number is: %d", max); //For printing the maximum of n numbers
	return 0; //Return function
} 