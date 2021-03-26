/*
Author: Mir Saeed Mozin
Creation Date: 26th March 2021
Program Purpose: To read and write student marks data to a file
*/
#include <stdio.h>   //Pre-processor directive to include standard input and output functions header file
#include <stdlib.h>  //Pre-processor directive to include standard library functions header file
struct s{    //Using structures to create a user-defined data type
	char name[50];
	int rollNo;
	int marks;
};
int main(){  //Main function
	struct s a[10],b[10];
	FILE *fptr;
	int i;
	fptr=fopen("30_Student_File.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) 
	{
		fflush(stdin);
		//For reading the student information
		printf("Enter student details!\n");
		printf("Enter Name: ");
		gets(a[i].name);    //For name
		printf("Enter Roll Number: ");
		scanf("%d",&a[i].rollNo);   //For roll number
		printf("Enter Total Marks: ");    
		scanf("%d",&a[i].marks);    //For marks
	}
	fwrite(a, sizeof(a), 1, fptr);   //For writing data to the file opened by fopen function
	fclose(fptr);  
	fptr=fopen("30_Student_File.txt","rb");
	fread(b, sizeof(b), 1, fptr);   //For reading data from the file opened by the fopen function
	printf("\nEntered details are:\n");
	//For loop to print the entered information
	for (i=0; i<1; ++i) 
	{
		printf("Name: %s\n",b[i].name); 
		printf("Roll number: %d\n", b[i].rollNo);
		printf("Total Marks: %d\n",b[i].marks);
	}
	fclose(fptr); //Closing the program
}
