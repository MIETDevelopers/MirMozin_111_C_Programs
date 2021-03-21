/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To store the information of student marks using structures and find the total marks of individual student
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
struct student{
    char name[50];
    int roll;
    float marks1, marks2, marks3, marks4;
} s;

int main(){
    //For reading the user input
    printf("Enter information:\n");
    //For student's name
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    //For student's roll number
    printf("\nEnter roll number: ");
    scanf("%d", &s.roll);
    //For student's marks
    printf("\nEnter marks of first subject: ");
    scanf("%f", &s.marks1);
    printf("\nEnter marks of second subject: ");
    scanf("%f", &s.marks2);
    printf("\nEnter marks of third subject: ");
    scanf("%f", &s.marks3);
    printf("\nEnter marks of fourth subject: ");
    scanf("%f", &s.marks4);
    //For printing the student information
    printf("\nDisplaying Information!\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Total marks: %.1f\n", s.marks1+s.marks2+s.marks3+s.marks4);

    return 0; //Return function
}