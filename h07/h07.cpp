/**
 *  @author Tracy Nguyen
 *  @date March 7, 2022
 *  @file h07.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h07.h"

// Place your function definitions in this file.
/**
    zipZap(str) removes the middle letters from all "zip" or "zap" strings.

    @param str the input string.
    @return Look for patterns like "zip" and "zap" in the input string:
        any substring of length 3 that starts with "z" and ends with "p".
        Return a string where for all such words, the middle letter
        is gone, so "zipXzap" returns "zpXzp".
        <ul>
        <li>zipZap("zipXzap") returns "zpXzp"
        <li>zipZap("zopzop") returns "zpzp"
        <li>zipZap("zzzopzop") returns "zzzpzp"
        </ul>
*/
string zipZap(const string& str)
{
    string result;
    if (str.size() <3) return str;
    for (size_t i=0; i<str.size(); ++i)
    {
        result  = result + str.at(i);
        if (str.at(i) =='z' && i!=str.size()-2)
        {
            if (str.at(i+2) == 'p')
            {
                ++i;
            }
        }
    }
    return result;
}

/**
    countCode(str) counts all occurences of the "code" pattern in str.

    @param str the input string.
    @return the number of times that the string "code" appears
        anywhere in the given input string, except that we'll accept
        <b>any</b> letter for the 'd', so "cope" and both "cooe" count.
        <ul>
        <li>countCode("aaacodebbb") returns 1
        <li>countCode("codexxcode") returns 2
        <li>countCode("cozexxcope") returns 2
        </ul>
*/
int countCode(const string& str)
{
    int count = 0;
    for (size_t i=0; i<str.size(); ++i)
    {
        if (str.substr(i,2) == "co" && str.substr(i+3,1) == "e")
        {
            ++count;
        }
    }
    return count;
}

/**
    everyNth(str, n) calculates every nth character.

    @param str the input string to check.
    @param n the n-th character to use
    @return the string made starting with char 0, and then
        every n-th char of the string. So, if n is 3,
        use char 0, 3, 6, and so on. If n is
        less than 1, return the empty string
        <ul>
        <li>everyNth("Miracle", 2) returns "Mrce"
        <li>everyNth("abcdefg", 2) returns "aceg"
        <li>everyNth("abcdefg", 3) returns "adg"
        </ul>
*/
string everyNth(const string& str, int n)
{
    string result;
    for (size_t i=0; i<str.size(); i+=n)
    {
        result = result + str.at(i);
    }
    return result;
}

/**
    prefixAgain(str, n) returns true when the prefix(0,n) appears again in the string.

    @param str the input string.
    @param n the number of characters to count for the prefix.
    @return consider the prefix string made of the first n characters of
        the input string. Does that prefix string appear somewhere else
        in the string? Assume that the string is not empty and that n
        is in the range 1..inStr.length().
        <ul>
        <li>prefixAgain("abXYabc", 1) returns true
        <li>prefixAgain("abXYabc", 2) returns true
        <li>prefixAgain("abXYabc", 3) returns false
        </ul>
*/
bool prefixAgain(const string& str, int n)
{
    string prefix = str.substr(0,n);
    for (size_t i=n; i<=str.size(); ++i)
    {
        if (str.substr(i,n) == prefix)
        {
            return true;
        }
    }
    return false;
}

////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}