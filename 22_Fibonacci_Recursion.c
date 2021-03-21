/*
Author: Mir Saeed Mozin
Creation Date: 21st March 2021
Program purpose: To generate fibonacci series using recursion
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
void printFibonacci(int n){    
    static int n1=0, n2=1, n3; //Static integer variable declaration    
    if(n>0)
    {    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d\t", n3);    
         printFibonacci(n-1);    
    }    
}    
int main(){ //Main function    
    int n; //Integer variable declaration
    //Printf and Scanf function calling
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("0\t1\t"); //For printing 0 and 1  
    printFibonacci(n-2); //Because 2 numbers are already printed    
  return 0; //Return function
 }    