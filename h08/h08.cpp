/**
 *  @author Tracy Nguyen
 *  @date March 7, 2022
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h08.h"

// Put your function implementation (definitions) in this file

#include <string>
/**
   Computes a barcode given a 5-digit zip code.
   @param zip the 5-digit zip code.
   @return the bar code with | for full bars and : for half bars.
 */
string barCode(int zip)
{
    int code = zip;
    string result;
    while (code!=0)
    {
        result  = codeForDigit(code%10) + result;
        code = code/10;
    }
    result += codeForDigit(checkDigit(zip));
    return "|" + result + "|";
}

/**
   Returns the bar code value for a given digit.
   @param digit integer
   @return string encoding of the digit
*/
string codeForDigit(int digit)
{
    switch(digit)
    {
        case 1:
            return ":::||";
        case 2:
            return "::|:|";
        case 3:
            return "::||:";
        case 4:
            return ":|::|";
        case 5:
            return ":|:|:";
        case 6:
            return ":||::";
        case 7:
            return "|:::|";
        case 8:
            return "|::|:";
        case 9:
            return "|:|::";
        case 0:
            return "||:::";
    }
    return "";
}

/**
 * Calculates the check digit for a zip code.
 * @param zip the zip code
 * @return check digit for zip according to this rule.
 *
 * Sum all the digits in the zip code.
 */
int checkDigit(int zip)
{
    int code = zip;
    int sum = 0;
    if (zip < 10)
    {
        return 10-zip;
    }
    while (code!=0)
    {
        sum = sum + code%10;
        code = code/10;
    }
    
    int total = 10;
    while (total<sum)
    {
        total+=10;
    }
    
    return total-sum;
}

/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
    // You can add code that "runs" here
    return 0;
}