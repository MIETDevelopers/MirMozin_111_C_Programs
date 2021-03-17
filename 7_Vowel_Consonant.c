/*
Author: Mir Saeed Mozin
Creation Date: 17th March 2021
Program Purpose: To check whether an entered alphabet is a vowel or a consonant
*/
#include<stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
	char c; //Character variable declaration
	int lowercase_vowel, uppercase_vowel; //Integer variable declaration
	//Printf and Scanf function calling
	printf("Enter an alphabet: "); 
	scanf("%c", &c);
	//Variable definition
	lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'); //Comes true if variable 'c' is a lowercase vowel
	uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U'); //Comes true if variable 'c' is an uppercase vowel
	//If-else loop for checking whether the entered alphabet is a vowel or not
	if (lowercase_vowel || uppercase_vowel) //If condition
	{
		printf("\n%c is a vowel", c);
	}  
	else //Else condition
	{
	  	printf("\n%c is a consonant", c);
	}
	return 0; //Return function
}