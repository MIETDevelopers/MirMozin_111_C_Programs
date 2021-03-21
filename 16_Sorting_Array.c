/*
Author: Mir Saeed Mozin
Creation Date; 20th March 2021
Program purpose: To sort an array using insertion sort
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
    int n, i, j, temp; //Integer variable declaration
    int arr[50];    //Declaring an array
    //Printf and Scanf function calling
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    //For loop to take n inputs
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //For loop for sorting the array
    for (i = 1; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            { 
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //For printing the sorted array
    printf("Numbers in ascending order:\n");
    for (i = 0; i <= n-1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0; //Return function
}