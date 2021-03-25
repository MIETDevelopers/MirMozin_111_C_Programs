/*
Author: Mir Saeed Mozin
Creation Date: 25th March 2021
Program purpose: To demonstrate function implementation which returns a pointer
*/
#include<stdio.h>    //Pre-processor directive to include standard input and output functions header file
int * funct()
{
    //Static integer variable declaration
    static int num = 5;
    return (&num);
}
int main(){    //Main function
    int* p;    //Declaring a pointer
    p = funct();
    //Printf function calling
    printf("Address: %p\n", p);    //For printing address
    printf("Value: %d\n", *p);   //For printing value at above address
    return 0;   //Return function
}