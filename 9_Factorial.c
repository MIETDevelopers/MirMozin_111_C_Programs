/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To generate factorial of an entered number
*/
#include <stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
 	int n1=1, number; //Integer variable declaration
 	printf("Enter an integer: "); //Printf function calling
  	scanf("%d", &number); //Scanf function calling
 	printf("The factorial of %d is: \n", number);
 	//For loop starting from 1 upto the entered number
  	for(int i=1; i<=number; i++)
  	{
      	n1 = n1*i;
 		printf("%d\t", n1);
 	}
 	return 0; //Return function
}
