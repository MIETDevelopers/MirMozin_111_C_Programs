/*
Author: Mir Saeed Mozin
Creation Date: 17th March 2021
Program Purpose: To find the Euclidean Distance between two points
*/
#include<stdio.h> //Pre-process directive to include standard input and output functions header file
#include<math.h> //Pre-process directive to include mathematical functions header file
int main(){ //Main function
	int x1, x2, y1, y2; //Integer variable declaration
	float distance; //Float variable declaration
	//Printf and Scanf function calling
	printf("\nEnter 'X' coordinate of point 1: "); 
	scanf("%d", &x1); //For taking 'X' coordinate of point 1
	printf("\nEnter 'Y' coordinate of point 1: ");
	scanf("%d", &y1); //For taking 'Y' coordinate of point 1
	printf("\nEnter 'X' coordinate of point 2: ");
	scanf("%d", &x2);//For taking 'X' coordinate of point 2
	printf("\nEnter 'Y' coordinate of point 2: ");
	scanf("%d", &y2);//For taking 'Y' coordinate of point 2
	distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2)); //Variable defintion
	printf("The distance between the two points is: %.1f", distance);
	return 0; //Return function
}
