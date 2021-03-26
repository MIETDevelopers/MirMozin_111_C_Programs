#include <stdio.h>   //Pre-processor directive to include standard input and output functions header file
#include<string.h>	 //Pre-processor directive to include string functions header file
void create_marks_csv(char *filename){
	FILE *fp;
	int count, id, marks;  //Integer variable declaration
	printf("\nCreating %s.csv file!",filename);
	filename=strcat(filename,".csv");
	//Open file function
	fp=fopen(filename,"w+");
	//Printf and Scanf function calling
	fprintf(fp,"Student Id, Marks");
	printf("\nEnter the number of students: ");
	scanf("%d", &count);
	//For loop to take inputs and print them in the file
	for(int i = 1; i <= count; i++)
	{
		printf("\nEnter roll number of Student %d: ", i);
		scanf("%d", &id);   //For student roll number
		printf("Enter marks: ");
		scanf("%d", &marks);   //For marks

		fprintf(fp,"%d,%d",id,marks);
	}
	fclose(fp); //Close file function

	printf("\n%s file created",filename);
}
int main(){   //Main function
	char str[100];
	printf("\nEnter the filename: ");

	gets(str);
	create_marks_csv(str);

	return 0;   //Return function
}
