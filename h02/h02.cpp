/**
 *  @author Tracy Nguyen
 *  @date February 14, 2022
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "tnguyen4561";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // input = amount of artificial sweetener needed to kill a mouse
    // weight of mouse
    // weight of dieter
    
    // Write your code here
    cout << "Weight of the mouse in grams: " << endl;
    int mouseWeight;
    cin >> mouseWeight;
    cout << "Lethal dose for the mouse (in grams): " << endl;
    int mouseDose;
    cin >> mouseDose;
    cout << "Desired weight of the dieter (in pounds): " << endl;
    int dietWeight;
    cin >> dietWeight;
    
    const double SWEETENER = .001;
    const int CAN_WEIGHT = 350;
    const int POUNDS = 454;
    
    double weightGrams = dietWeight * POUNDS;
    double doseGrams = (weightGrams*mouseDose)/mouseWeight;
    double doseCans = doseGrams/(CAN_WEIGHT*SWEETENER);
    
    cout << fixed << setprecision(0);
    cout << "Lethal dose in grams, cans is [" << doseGrams << ", " << doseCans << "]";
    
    return 0;
}
