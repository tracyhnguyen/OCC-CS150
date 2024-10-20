/**
 *  @author Tracy Nguyen
 *  @date February 1, 2022 (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "tnguyen4561";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * Cereal Box Calculator
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // GIVEN: 1 metric ton = 35,273.92 ounces
    // INPUT: package of cereal weight (oz)
    // CALCULATION: 1mt = oz/35,273.92
    // OUTPUT: weight of cereal (tons) and number of boxes to make 1 ton

    // Write your code here
    cout << STUDENT << " starter code." << endl;
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;
    
    cout << "Enter ounces per box of cereal: " << endl;
    double ouncesPerBox;
    cin >> ouncesPerBox;
    
    const double OUNCES_PER_TON = 35273.92;
    double weightInTons = ouncesPerBox/OUNCES_PER_TON;
    double boxesPerTon = 1.0/weightInTons;
    
    cout << "Weight in metric tons, boxes per ton: ["
        << weightInTons << ", " << boxesPerTon << "]" << endl;


    cout << "[1, 1]" << endl;

    return 0;
}

