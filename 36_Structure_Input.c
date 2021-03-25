/*
Author: Mir Saeed Mozin
Creation Date: 25th March 2021
Program purpose: To demonstrate function implementation which takes structure as input
*/
#include<stdio.h>  //Pre-processor directive to include standard input and output functions header file
struct student //Defining a structure
{
    char name[20];
    int roll_no;
    int marks;
};
void print_struct(char name[], int roll_no, int marks);
//Main function
int main(){   
    struct student s = {"Shawn", 1, 99};  
    print_struct(s.name, s.roll_no, s.marks);
    return 0;  //Return function
}
void print_struct(char name[], int roll_no, int marks)
{
    //Printf function calling
    printf("Name: %s\n", name);   //For printing the name
    printf("Roll number: %d\n", roll_no); //For printing the roll number
    printf("Marks: %d\n", marks); //For printing the marks
}