/*
Author: Mir Saeed Mozin
Creation Date; 16th March 2021
Program purpose: To find out area and perimeter of Circle, Square and Rectangle
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	float radiusOfCircle, sideOfSquare, lengthOfRectangle, widthOfRectangle; //Float variable declaration
	radiusOfCircle=8; 
	sideOfSquare= 7;
	lengthOfRectangle= 9;
	widthOfRectangle= 4;
	//Printf function calling
	printf("Area of Circle is= %.1f\n", ((22*radiusOfCircle*radiusOfCircle)/7)); //For printing the value of Area of Circle
	printf("Perimeter of Circle= %.1f\n", ((2*22*radiusOfCircle)/7)); //For printing the value of Perimeter of Circle
	printf("Area of Square= %.1f\n", (sideOfSquare*sideOfSquare)); //For printing the value of Area of Square
	printf("Perimeter of Square= %.1f\n", (4*sideOfSquare)); //For printing the value of Perimeter of Square
	printf("Area of Rectangle= %.1f\n", lengthOfRectangle*widthOfRectangle); //For printing the value of Area of Rectangle
	printf("Perimeter of Rectangle= %.1f\n", 2*lengthOfRectangle*widthOfRectangle); //For printing the value of Perimeter of Rectangle

	return 0; //Return function
}
