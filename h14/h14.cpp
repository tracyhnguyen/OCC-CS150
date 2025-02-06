/**
 *  @author Tracy Nguyen
 *  @date April 5, 2022
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>

using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine(const string& prompt = "")
{
    if (!prompt.empty())
    {
        if (prompt.back() == ' ') cout << prompt;
        else {cout << prompt << " ";}
    }
    string result;
    getline(cin, result);
    
    return result;
}

int getInt(const string & prompt = "")
{
    string line = getLine(prompt);
    
    while (!cin.fail())
    {
        stringstream in(line);
        int num;
        in >> num;
        in >> ws;
        
        if (!in.eof() || in.fail())
        {
            cerr << line;
            line.clear();
            line = getLine(prompt);
        }
        else
        {
            return num;
        }
    }
    return 0;
}

double getReal(const string& prompt = "")
{
    string line = getLine(prompt);
    
    while (!cin.fail())
    {
        stringstream in(line);
        double num;
        in >> num;
        in >> ws;
        
        if (!in.eof() || in.fail())
        {
            cerr << line;
            line.clear();
            line = getLine(prompt);
        }
        else
        {
            return num;
        }
    }
    return 0;
}

bool getYN(const string& prompt = "")
{
    string line = getLine(prompt);

    while (true)
    {
        if (!line.empty())
        {
            istringstream in(line);
            string word;
            in >> word;
            in >> ws;
            char c = word.front();
            
            if (c == 'Y' || c == 'y')
            {
                return true;
            }
            else if (c == 'N' || c == 'n')
            {
                return false;
            }
            else
            {
                cerr << "ERROR: Failed!" << endl;
            }
        }
        line.clear();
        line = getLine(prompt);
    }
    return false;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // do
    // {
    //     string s = getLine("Enter a string: ");
    //     cout << "s->\"" << s << "\"" << endl;

    //     int n = getInt("Enter an integer:");
    //     cout << "n->" << n << endl;

    //     double d = getReal("Enter a real number: ");
    //     cout << "d->" << d << endl;

    // } while (getYN("Try again? (Y/N)"));

    return 0;
}