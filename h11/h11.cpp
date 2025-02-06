/**
    @file h11.cpp
    @author Tracy Nguyen
    @version Tues/Thurs 2:20 PM
    @date March 14, 2022
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h11.h"

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

// Add your function implementations here
/**
    Recursively searches a string to find a second string.
    @param s the string to search through.
    @param t the string to search for
    @return true if t is found in s.

    Tests whether the string t is contained in a string s.
    For instance, calling the function like this:
        bool b = find("Mississippi", "sip");
    returns true, since "sip" is contained in "Mississippi".
    You must write this as a recursive function, not by just
    calling the string::find() function, or by using a loop.
*/
bool find(const string& s, const string& t)
{
    if (s.substr(0,t.size()) == t)
    {
        return true;
    }
    if (s.size() < t.size())
    {
        return false;
    }
    
    return find(s.substr(1), t);
}

/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/
string stringClean(const string& str)
{
    if (str.size() == 0) return str;
    if (str[0] == str[1])
    {
        return stringClean(str.substr(1));
    }
    else
    {
        return str[0] + stringClean(str.substr(1));
    }
}


////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

