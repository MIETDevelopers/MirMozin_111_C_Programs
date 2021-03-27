/*
Author: Mir Saeed Mozin
Creation Date: 27th March 2021
Program Purpose: To pass array as arguments to a single function
*/
#include <stdio.h>   //Pre-processor directive to include standard input and output functions header file
void printArrays(int arr1[],int arr2[][3] );
//Main function body
int main(){
    int x,y;    //Integer variable declaration
    //Array declaration with integer data type
    int arr1[5]; 
    int arr2[2][3];
    printf("Enter elements for the first array: ");
    //For loop to take values for first array
    for(int i=0; i<5; i++)      
    {  
            printf("\nIndex [%d]: ", i);
            scanf("%d", &arr1[i]);
    }
    printf("\nEnter elements for the second array: ");
    //For loop to take values for second array
    for(int i=0; i<2; i++)     //For value of rows
    { 
        for(int j=0; j<3; j++)    //For value of columns
        {  
            printf("\nIndex [%d][%d]: ",i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printArrays(arr1, arr2);

	return 0;	//Return function
}
void printArrays(int arr1[], int arr2[][3]){
    //For printing the elements of first array
    printf("\nArray 1:\n");
    for(int i=0; i<5; i++) 
    { 
            printf("%d ", arr1[i]);
    }
    //For printing the elements of second array
    printf("\nArray 2:\n");
    for(int i=0; i<2; i++) 
    {  
        for(int j=0; j<3; j++) 
        { 
            printf("%d ", arr2[i][j]);
            if(j==2)
                printf("\n");
        }
    }
}