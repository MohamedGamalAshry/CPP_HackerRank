// Name: InputAndOutput.cpp
// Description: The program Read 3 numbers from stdin and print their sum to stdout.
// Author: Mohamed Ashry
// HackerRank

/* --------------------------------------------------------------*/

#include <iostream>	// enable the program to output data on the screen by including the Preprocessing Directive	

// Function main begins the program execution:

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // declaration and initzialization of the required variables:
    int a{0} ;      // declaration of the first number
    int b{0};       // declaration of the 2nd number
    int c{0};       // declaration of the 3rd number
    int result{0};  // declaration of the result 
    
    //cout << "Enter the three numbers: "   ;     // user enter the three numbers
    cin >> a >> b >> c ;        // read the numbers from the users    
    result = a + b + c ;        // store the sum of the numbers in result variable       
    cout << result ;            // display and print the sum of the numbers
	return 0;					// indicate that program ended successfully by returning 0
	
}	//	end of main function

/* --------------------------------------------------------------*/

// Expected output to be: 
/*

		1+2+7 = 10

*/