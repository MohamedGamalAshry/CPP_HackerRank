// Name: BasicDataTypes.cpp
// Description:  
/*  Input consists of the following space-separated values: int, long, char, float, and double, respectively.
	Output Format Print each element on a new line in the same order it was received as input. 
	Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places. */

// Author: Mohamed Ashry
// HackerRank

/* --------------------------------------------------------------*/

#include <iostream>			// enable the program to output data on the screen by including the Preprocessing Directive	
#include <cstdio>
using namespace std;

// Function main begins the program execution:

int main() {
    // Complete the code.
    // declaration and initzialization of the required variables:
    int integer{};          // delaration of the int variable
    char character{'a'};    // delaration of the char variable
    long Long{};            // delaration of long int int variable
    float Float{};          // delaration of the float variable
    double Double{};        // delaration of the double variable
    
    // read all the different variables from the user
    scanf("%d %ld %c %f %lf", &integer, &Long, &character, &Float, &Double);
    // display each value in new line
    printf("%d\n%ld\n%c\n%f\n%lf", integer, Long, character, Float, Double ) ;   
    
	return 0;				// indicate that program ended successfully by returning 0
	
}	//	end of main function

/* --------------------------------------------------------------*/

// Expected output to be: 
/*

		3
		12345678912345
		a
		334.230
		14049.304930000

*/