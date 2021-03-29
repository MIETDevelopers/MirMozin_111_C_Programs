/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To demonstrate the use of various string operations by a simple program
*/
#include<stdio.h>     //Pre-processor directive to include standard input and output functions header file
#include<string.h>    //Pre-processor directive to include string operations header file 
int main(){		//Main function
	//Use of string function to copy one string to another
	char str1[] = "Hello World!";
	char str2[] = "String Operations";
	char str3[40];
	char str4[40];
	char str5[] = "Hi";

	strcpy(str2, str1);
	strcpy(str3, "Copied String");
	strcpy(str4, str5);
	printf("1: %s\n2: %s\n3: %s\n4: %s\n", str1, str2, str3, str4);     //To print the copied result
	return 0;	//Return function
}
