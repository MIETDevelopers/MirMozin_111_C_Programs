/*
Author: Mir Saeed Mozin
Creation Date: 25th March 2021
Program purpose: To demonstrate pointer variable initialization with the address of another variable and then print normal variable value and its address using pointer variable
*/
#include <stdio.h>   //Pre-processor directive to include standard input and output functions header file
int main(){     //Main function
	//Integer variable and pointer declaration
	int i, number = 5;  
	int *p;
	//Assigning address of number to the pointer p
	p = &number;
	//For printing the address
	printf("Value of variable = %d\nAddress of variable = %p", *p, p);
	return 0;   //Return function
}