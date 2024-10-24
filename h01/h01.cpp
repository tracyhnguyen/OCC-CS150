/**
 *  @author Tracy Nguyen
 *  @date February 10, 2022
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "tnguyen4561";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * Changes time by adding and subtracting.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // ask for time and duration
    // print the sum and the difference

    // Write your code here
    cout << "\tTime: ";
    int timeHours;
    char discard;
    int timeMinutes;
    cin >> timeHours >> discard >> timeMinutes;
    
    cout << "\tDuration: ";
    int durationHours;
    int durationMinutes;
    cin >> durationHours >> discard >> durationMinutes;

    // 3. Processing section - compute the results
    int time = (timeHours*60) + timeMinutes;
    int duration = (durationHours*60) + durationMinutes;
    int after = time + duration;
    int before = 4320 + time - duration;
    int afterHours = ((after/60%12)+11)%12 + 1;
    int afterMinutes = after%60;
    int beforeHours = ((before/60%12)+11)%12 + 1;
    int beforeMinutes = before%60;
    
    // 4. Output section: test data inside brackets [ ]
    cout << endl;
    cout << setfill('0');
    cout <<  "[" << afterHours << ":" << setw(2) << after%60
        << ", " << beforeHours << ":" << setw(2) << before%60
        << "]" << endl;

    return 0;
}
