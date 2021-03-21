/*
Author: Mir Saeed Mozin
Creation Date; 20th March 2021
Program purpose: To search an element in an array using linear search
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
    int i, n, keyNum, index, found = 0;; //Integer variable declaration
    //Printf and Scanf function calling
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n]; //Array declaration
    printf("Enter %d numbers: \n", n);
    //For loop to take n inputs 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d", &keyNum);
    // For loop to determine the linear search
    for (i = 0; i < n ; i++)
    {
        if (keyNum == arr[i] )
        {
            found = 1;
            break;
        }
    }
    //For printing the output based on user input
    if (found == 1) 
        printf("Element is present in the array at position: %d", i+1);
    else
        printf("Element is not present in the array.\n");
    return 0; //Return function
}