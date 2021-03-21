/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To swap two numbers using call by reference
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
void swap(int*, int*);
int main(){ //Main function
   int x, y; //Integer variable declaration
   //Printf and scanf function calling
   printf("Enter two numbers you wish to be swapped: \n");
   scanf("%d %d", &x, &y);
   printf("Before Swapping:\nFirst number = %d\nSecond number = %d\n", x, y);
   swap(&x, &y); //Swap function calling 
   printf("After Swapping:\nFirst number = %d\nSecond number = %d\n", x, y);
   return 0; //Return function
} 
void swap(int *a, int *b)
{
   int temp;
   //For swapping the numbers
   temp = *b; 
   *b = *a;
   *a = temp;   
}