/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To calculate the sum of digits of an entered number
*/
#include <stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
    int n, m;
    int sum=0;
    //Printf and Scanf function calling
    printf("Enter a number: ");    
    scanf("%d",&n);    
    //While loop for calculating the sum of digits
    while(n>0) //Input value should be greater than 0
    {    
        m = n%10;    
        sum = sum+m;    
        n = n/10;    
    }    
    printf("Sum of digits is: %d", sum); //For printing the calculated value 
    return 0; //Return function
}