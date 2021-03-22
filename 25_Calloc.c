/*
Author: Mir Saeed Mozin
Creation Date: 22nd March 2021
Program purpose: To demonstrate the use of calloc() function
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
#include<stdlib.h> //Pre-processor directive to include standard library functions header file
int main (){ //Main function
    int i, n;
    int *a;
    //Printf and Scanf function calling
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (int*)calloc(n, sizeof(int));
    printf("\nEnter %d numbers: \n", n);
    //For loop to take n user inputs
    for( i=0 ;i < n ;i++ ) 
    {
        scanf("%d",&a[i]);
    }
    printf("The numbers entered are: ");
    //For loop to print the entered numbers
    for( i=0 ; i < n ; i++ ) 
    {
        printf("%d ",a[i]);
    }
    free(a);
    return(0); //Return function
}