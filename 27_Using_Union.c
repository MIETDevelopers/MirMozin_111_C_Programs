/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To store the information of a student  using union
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
#include <string.h> // Pre-processor directive to include string functions header file
union student{
	char name[20];
	char subject[20];
	float percentage;
};
int main(){ //Main function
	//Declaring recorf1 and record2 variables for union
	union student record1; 
	union student record2;
	printf("Union record 1 values example:\n"); //Printf function calling
	//Assigning values to record1 union variable and printing the information
	//For name
	strcpy(record1.name, "Kavya");
	printf("Name: %s\n", record1.name);
	//For subject
	strcpy(record1.subject, "Maths");
	printf("Subject: %s\n", record1.subject);
	//For percentage
	record1.percentage = 88.50;
	printf("Percentage: %.2f\n\n", record1.percentage);
	//Assigning values to record2 union variable and printing the information
	printf("Union record 2 values example:\n");
	//For name
	strcpy(record2.name, "Masroor");
	printf("Name: %s\n", record2.name);
	//For subject
	strcpy(record2.subject, "Physics");
	printf("Subject: %s\n", record2.subject);
	//For Percentage
	record2.percentage = 91.50;
	printf("Percentage: %.2f\n", record2.percentage);
return 0; //Return function
}