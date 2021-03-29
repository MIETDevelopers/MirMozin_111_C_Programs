/*
Author: Mir Saeed Mozin
Creation Date: 29th March 2021
Program purpose: To interact with user asking any student's ID and print his/her attendance details
*/
#include <stdio.h> 		//Pre-processor directive to include standard input and output functions header file
#include <stdlib.h>		//Pre-processor directive to include standard library functions header file	
struct s{  //Using structures to create a user defined data type
	char name[50];
    	int roll;
    	float attendance;
};
int main(){    //Main function
	struct s b[50];
	int i; 
	FILE *fptr = fopen("C:\\Users\\Mehh's\\Desktop\\C_Programs\\MirSaeed_111_C_Programs_Repository\\45_Store_Details.csv","r");		//For opening the file
	fread(b, sizeof(b), 1, fptr);	  //For reading from the file
	//Printf and Scanf function calling
	printf("Enter the ID of the student (1, 2, 3, 4, 5, 6, 7, 8, 9, 10): ");
	scanf("%d", &i);
	if(i!=0 && i<=10)
	{
		printf("Name: %s\nRoll Number: %d\nAttendance Percentage: %.1lf\n", b[i].name, b[i].roll, b[i].attendance);		//For printing the details  
		if(b[i].attendance < 75)
			printf("Not eligible for exams!");
		else
			printf("Eligible for exams!");
	}
	else
	{
		printf("Wrong ID!");
		exit(0);
	}
	fclose(fptr);
	return 0;   //Return function
}

