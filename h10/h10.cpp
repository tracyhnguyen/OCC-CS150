/**
 *  @author Tracy Nguyen
 *  @date March 14, 2022
 *  @file h10.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h10.h"

// Place your function definitions in this file.
bool read(const string& prompt, int& age, bool) // 1
{
    cout << prompt;
    cin >> age;
    if (cin.fail())
    {
        cin.clear();
        return false;
    }
    return true;
}

bool read(const string& prompt, double& gpa, bool test) // 2
{
    cout << prompt;
    cin >> gpa;
    if (cin.fail())
    {
        cin.clear();
        return false;
    }
    else
    {
        cin.ignore(1024, '\n');
        return true;
    }
}

bool read(const string& prompt, string& name, bool test) // 3
{
    cout << prompt;
    if (test)
    {
        getline(cin, name);
    }
    else cin >> name;
    return true;
}

bool read(char& a, char b) // 4
{
    cin.get(a);
    return !(a==b);
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}

