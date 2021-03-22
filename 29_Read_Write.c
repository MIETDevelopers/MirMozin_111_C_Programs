/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To read and write in a file
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
#include<stdlib.h>  //Pre-processor directive to include string functions header file
int main(){ //Main function
    FILE *fp; //File pointer
    char fName[20];
    //For file name
    printf("\nEnter file name to create: ");
    scanf("%s",fName);
    //For creating/opening the file
    fp=fopen(fName,"w");
    //Checking if the file is created or not
    if(fp==NULL)
    {
        printf("\nFile not created!\n");
        exit(0); //Exit from the program
    }
    printf("\nFile created successfully\n");
    //For writing in the file
    printf("Enter the data to be written into the file:\n");
    putc('A', fp);
    putc('B', fp);
    putc('C', fp);
    printf("Data written successfully\n");
    fclose(fp);
    //Opening file to read data
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!");
        exit(0);
    }
    //For printing the contents of the file
    printf("Contents of file are:\n");
    printf("%c", getc(fp));
    printf("%c", getc(fp));
    printf("%c", getc(fp));
    fclose(fp);
    return 0; //Return function
}