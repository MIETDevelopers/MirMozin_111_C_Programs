/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To demonstrate the use of various string operations
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(void){
	char name[] = "hippopotamus";
	printf("%c\t%c\t%c\t", *name, *(name+2), *(name+4)); //Output will be: h    p    o
	char *namePtr;
	namePtr = name;
	printf("\n%c\t%c\t%c\t", *namePtr, *(namePtr+3), *(namePtr+5)); //Output will be: h    p    p
}