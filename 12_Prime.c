/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To check whether an entered number is a prime number or not
*/
#include <stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
   int n, count = 0; 
 	//Printf and scanf function calling
    printf("Enter the Number: ");
    scanf("%d",&n);
    //For loop 
    for(int i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
        	count=1;           
            break;
        }
    }
    //If else loop for printing whether the entered number is prime or not
    if (count==0)
        printf("%d is a Prime number", n);
    else
        printf("%d is not a Prime number", n);
 
    return 0;//Return function
}