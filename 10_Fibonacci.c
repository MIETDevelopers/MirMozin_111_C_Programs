/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To generate fibonacci series upto a given number
*/
#include <stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
	int n1=0, n2=1, n3, number; //Integer variable declaration
	printf("Enter the number of elements: "); //Printf function calling
	scanf("%d", &number); //Scanf function calling
	printf("\n%d\t%d", n1, n2); //Printf function calling
	for (int i = 2; i < number; ++i) //For loop starting from 2 because 0 and 1 are already printed
	{
		n3=n1+n2;
		printf("\t%d", n3);
		n1=n2;
		n2=n3;
	}
	return 0; //Return function
}
