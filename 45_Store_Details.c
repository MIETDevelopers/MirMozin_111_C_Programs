/*
Author: Mir Saeed Mozin
Creation Date: 27th March 2021
Program Purpose: To interact with user and take student's name, roll number and attendance percentage and stores it in a .csv file
*/
#include<stdio.h>     //Pre-processor directive to include standard input and output functions header file
struct s{    //Using structures to create a user defined data type
	char name[50];
	int roll;
	float attendance;
};
int main(){   	//Main function
	struct s a[50], b[50];
	int n;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	FILE *fptr;
	fptr=fopen("45_Store_Details.csv","wb");   //For opening the file
	for (int i=1; i<=n; i++)    //For loop to take details from the user
	{
		fflush(stdin);
		printf("\nEnter details of student %d:\n", i);
		printf("Enter Name: ");
		gets(a[i].name);   //Reading name
		printf("\nEnter Roll Number: ");
		scanf("%d", &a[i].roll);    //Reading roll number
		printf("\nEnter Attendance Percentage: ");
		scanf("%f", &a[i].attendance);   //Reading attendance percentage
		printf("\n");
	}
	fwrite(a, sizeof(a), 1, fptr);  	//For writing in the file
	fclose(fptr);
	fptr=fopen("45_Store_Details.csv","rb");
	fread(b, sizeof(b), 1, fptr);	  //For reading from the file
	for (int i=1; i<=n; i++)    //For loop to print the details
	{
		printf("Name: %s\nRoll Number: %d\nAttendance Percentage: %.1lf\n", b[i].name, b[i].roll, b[i].attendance);		//Printing the stored/ entered details
	}
	fclose(fptr);
	return 0;  //Return function
}
