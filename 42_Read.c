/*
Author: Mir Saeed Mozin
Creation Date: 27th March 2021
Program Purpose: To read content from a .csv file
*/
#include <stdio.h>   //Pre-processor directive to include standard input and output functions header file
#include <stdlib.h>  //Pre-processor directive to include standard library functions header file
struct s{	 	//Using structures to create a user defined data type
	char text[1000];
};
 int main(){	//Main function
	struct s a[1000], b[1000];
	FILE *fptr;
	int i;
	//For opening the file
	fptr=fopen("C:\\Users\\Mehh's\\Desktop\\C_Programs\\MirSaeed_111_C_Programs_Repository\\42_Read.csv","wb"); //Opening the file from the location.
	for (i=0; i<1; ++i) 
	{
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //For reading the text
	}
	//For writing to the file
	fwrite(a, sizeof(a), 1, fptr);
	fclose(fptr);
	fptr=fopen("C:\\Users\\Mehh's\\Desktop\\C_Programs\\MirSaeed_111_C_Programs_Repository\\42_Read.csv","rb");
	fread(b, sizeof(b), 1, fptr);   //For reading from the file
	printf("\nEntered details are:\n");
	for (i=0; i<1; ++i) 
	{
		printf("%s\n", b[i].text); //For printing the entered text
	}
	fclose(fptr); //For closing the program
}