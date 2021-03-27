/*
Author: Mir Saeed Mozin
Creation Date; 19th March 2021
Program purpose: To find the maximum of 3 numbers
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){    //Main function
	int num, max=0; 
	printf("Enter 3 numbers:\n");
    for(int i=0; i<3; i++)	 //For loop to take and store the largest number
    {
    	scanf("%d", &num);
		if(num > max)
			max = num;
	}
 	printf("The largest number is: %d", max);   //For printing the maximum number
	return 0;    //Return function
} 