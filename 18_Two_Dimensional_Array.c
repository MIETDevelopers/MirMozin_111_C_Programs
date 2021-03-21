/*
Author: Mir Saeed Mozin
Creation Date: 20th March 2021
Program purpose: To read and print elements in two dimensional array
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
   int arr[2][3]; //2D array declaration
   int i, j; //Counter variables for loop
   //For loop to read inputs
   for(i=0; i<2; i++) 
   {
      for(j=0; j<3; j++) 
      {
         printf("\nEnter value for [%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   printf("\nTwo Dimensional array elements: \n"); //Printf function calling
   //For loop to print elements
   for(i=0; i<2; i++) 
   {
      for(j=0; j<3; j++) 
      {
         printf("%d\t", arr[i][j]);
         if(j == 2)
            printf("\n");
         
      }
   }
   return 0; //Return function
} 