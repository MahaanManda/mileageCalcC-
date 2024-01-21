/* Write a program that prompts the capacity, in gallons, of an automobile fuel tank and the miles per 
gallon the automobile can be driven. The program outputs the number of miles the automobile can be driven without 
refueling.*/

    //preprocessor
#include <iostream>
#include <string>

    //header
using namespace std;



    //main algorithm 
int main() {

        //variables
    double fuelCapacity;
    double mpg;
    double calc;

        //prompt
    cout << "Enter your automobile fuel tank capacity in gallons then press enter" << endl;
        //input
    cin >> fuelCapacity;
        // second prompt
    cout << "Enter your automobile miles per gallon then press enter" << endl;
        //input
    cin >> mpg;

        //calculate the number of miles the automobile can be driven without refueling.
    calc = fuelCapacity * mpg;


        //outputs the number of miles the automobile can be driven without refueling.
    cout << "Your automobile can be driven for approximately " << calc << " miles before refueling is needed" << endl;

        //return statement
    return 0;
}

