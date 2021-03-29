/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To demonstrate the use of string operations
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(void){
	char name[30];
    	printf("Enter name: ");
	gets(name);     //Function to read string from user
	printf("Name: ");
	puts(name);    //Function to display string
	return 0;    //Return function
}
