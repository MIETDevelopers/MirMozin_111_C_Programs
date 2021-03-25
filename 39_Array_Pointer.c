/*
Author: Mir Saeed Mozin
Creation Date: 25th March 2021
Program purpose: To demonstrate array name as pointer representation and print its elements values
*/
#include <stdio.h>   //Pre-processor directive to include standard input and output functions header file
int main( ){   //Main function
    int *p;    //Pointer variable
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; //Declaring an array of size 10
    //Assigning the address of arr[0] to the pointer
    p = &arr[0];
    for (int i = 0 ;i<10 ; i++)
    {
        printf("At index[%d]:\tValue = %d  &  Address = %p\n", i, *p, p);
        //Incrementing the pointer so that it points to the next element
        p++;
    }
    return 0;   //Return function
}