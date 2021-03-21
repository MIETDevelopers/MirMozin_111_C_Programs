/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: Using array of structures for student marks for each student and passing it to function for various operations
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
#include <string.h> // Pre-processor directive to include string functions header file
struct student{
    int id;
    char name[30];
    float percentage;
};
int main(){ //Main function
    int i; //Integer variable declaraion
    struct student record[3];
    //First student's record
    record[0].id=1;
    strcpy(record[0].name, "Mir");
    record[0].percentage = 99.0;
    //Second student's record         
    record[1].id=2;
    strcpy(record[1].name, "Masroor");
    record[1].percentage = 97.8;
    //Third student's record
    record[2].id=3;
    strcpy(record[2].name, "Kavya");
    record[2].percentage = 98.5;
    //For loop to print the records of the students
    for(i=0; i<3; i++)
    {
        printf("Student Id: %d\n", record[i].id);
        printf("Name: %s\n", record[i].name);
        printf("Percentage: %.1f\n\n",record[i].percentage);
    }
    return 0; //Return function
}