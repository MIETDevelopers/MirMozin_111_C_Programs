/*
Author: Mir Saeed Mozin
Creation Date: 22nd March 2021
Program purpose: To demonstrate the use of malloc() and free() functions by calculating the sum of n numbers entered by the user
*/
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
#include<stdlib.h> //Pre-processor directive to include standard library functions header file
int main (){ //Main function
    int n, i, *ptr, sum = 0;
    //Printf and Scanf function calling
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    //The malloc() function reserves a block of memory of the specified number of bytes
    ptr = (int*) malloc(n * sizeof(int)); 
    //If memory cannot be allocated
    if(ptr == NULL)                     
    {
        printf("Error! Memory not allocated");
        exit(0);
    }
    printf("\nEnter %d numbers:\n", n);
    //For loop to take inputs from the user
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum); //For printing the sum
    //The free() function deallocates the memory previously allocated by a call to calloc, malloc, or realloc
    free(ptr);
    return 0; //Return function
}