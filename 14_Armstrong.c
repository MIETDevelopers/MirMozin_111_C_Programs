/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To check whether an entered number is an armstrong number or not
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int num, remainder, n1, n2=0;
	printf("Enter a positive integer: "); //Printf function calling 
	scanf("%d", &num); //Scanf function calling for taking input number
	n1=num;
	//While loop for calculating the sum of the cubes of its digits
	while(n1>0)
	{
		remainder=n1%10;
		n2=n2+remainder*remainder*remainder;
		n1=n1/10;
	}
	 
	//If else loop for printing whether the number is an armstrong number or not
	if(n2==num)
		printf("%d is an Armstrong number",num);
	else
		printf("%d is not an Armstrong number",num);
	return 0; //Return function
}