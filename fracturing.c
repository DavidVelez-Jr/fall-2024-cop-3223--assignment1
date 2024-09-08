//********************************************************
// fracturing.c
// Author: David Velez
// UCF ID: 5679895
// Date: 9/1/2024
// Class: COP 3223C, Professor Parra
// Purpose: This program that takes user input in the form of 
// doubles to create 2 points and output the calculated distance
// perimeter, area, width, and height of a city in the form of a
// circle defined by those 2 points.
// Input: User input x1, y1, x2, y2.
// Output: (to the command line) The distance, perimiter, area,
// width and height given 4 user inputed values.
//********************************************************


// Header files for input, output, mathematical functions
#include <stdio.h>
#include <math.h>
#define PI 3.14159  // Define PI as 3.15159

//********************************************************
// double calculateDistance()
//
// Purpose:         Display the 2 inputed points, calculate and display distance
//                  between those points.
// Output:          Prints the 2 inputed points and creates distance formula.
// Precondition:    None.
// Postcondition:   Return distance formula.
//********************************************************

double calculateDistance()
{
    double x1, x2, y1, y2, distance; // Points and distance
    

    // Get the 2 points (x1,y1) & (x2,y2)

    printf("please enter your points:\n");

    printf("x1: ");
    scanf("%lf", &x1);

    // Get x1

    printf("x2: ");
    scanf("%lf", &x2);

    // Get x2

    printf("y1: ");
    scanf("%lf", &y1);

    // Get y1

    printf("y2: ");
    scanf("%lf", &y2);

    // Get y2


    // Distance formula 

    distance = (sqrt(pow((x2-x1),2)+pow((y2-y1),2)));

    
    printf("\nPoint #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n\n", x2, y2);
    
    return distance;
}

//********************************************************
// void printDistance(double distance)
//
// Purpose:         Function created to print the distance seperate from calculateDistance() to avoid
//                  printing distance in every function calculateDistance is called to.
// Output:          Prints the distance between the two points.
// Precondition:    Complete assignment objective in main.
// Postcondition:   None.
//********************************************************

void printDistance(double distance) // Get distance formula
{
    printf("The distance between the two points is  %.3lf\n\n", distance); // print distance
}   // insert

//********************************************************
// double calculatePerimeter()
//
// Purpose:         Function used to calculate perimeter of the city.
// Output:          Prints the 2 user inputed points and the perimeter of 
//                  the city.
// Precondition:    Complete assignment objective in main.
// Postcondition:   Return double representing the difficulty to 
//                  create the function.
//********************************************************

double calculatePerimeter()
{
    double callDistance = calculateDistance();     // insert calculateDistance()
    double radius = (callDistance/2);              // radius of city
    double perimeter = (2*PI*radius);              // perimiter of city
    double difficulty = 2.0;                       // function creation difficulty

    printf("The perimeter of the city encompassed by your request is %.3lf\n\n", perimeter);

    return difficulty;

}

//********************************************************
// double calculateArea()
//
// Purpose:         Display the 2 inputed points, calculate and display area
//                  of the city.
// Output:          Prints the 2 inputed points and the area of the city.
// Precondition:    Complete assignment objective in main.
// Postcondition:   Return double representing the difficulty to 
//                  create the function.
//********************************************************

double calculateArea()
{
    double callDistance = calculateDistance();                // insert calculateDistance()
    double area = (PI*((callDistance/2)*(callDistance/2)));   // area formula
    double difficulty = 2.0;

    printf("The area of the city encompassed by your request is %.3lf\n\n", area);

    return difficulty;
}

//********************************************************
// double calculateWidth()
//
// Purpose:         Display the 2 inputed points, calculate and display width
//                  of the city.
// Output:          Prints the 2 inputed points and the width of the city.
// Precondition:    Complete assignment objective in main.
// Postcondition:   Return double representing the difficulty to 
//                  create the function.
//********************************************************

double calculateWidth()
{
    double width = calculateDistance(); // Insert calculateDistance()
    double difficulty = 1.0;
    
    printf("The width of the city encompassed by your request is %.3lf\n\n", width);

    return difficulty;
}

//********************************************************
// double calculateHeight()
//
// Purpose:         Display the 2 inputed points, calculate and display height
//                  of the city.
// Output:          Prints the 2 inputed points and the height of the city.
// Precondition:    Complete assignment objective in main.
// Postcondition:   Return double representing the difficulty to 
//                  create the function.
//********************************************************

double calculateHeight()
{
    double height = calculateDistance();
    double difficulty = 1.0;

    printf("The height of the city encompassed by your request is %.3lf\n\n", height);

    return difficulty;
}


int main(int arg, char **argv) 
{
    printDistance(calculateDistance());
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} ; // main