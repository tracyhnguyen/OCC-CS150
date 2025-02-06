/**
 *  @author Tracy Nguyen
 *  @date March 8, 2022
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h09.h"
#include <iostream>

// Put your function implementation (definitions) in this file

/**
 * Converts an integer to its equivalent Roman digit.
 * @param n value of this digit
 * @param ones Roman symbol for ones
 * @param fives Roman symbol for ones
 * @param tens Roman symbol for tens
 * @return the Roman digit as a string.
 */
string digit(int n, const string& symbols)
{
    int num = n;
    int digit = n;
    string roman;

    // Get the 1s digit
    if (symbols == "IVX")
    {
        if (digit == 9)
            roman = roman + "IX";
        else if (digit == 4)
            roman = roman + "IV";
        else
        {
            if (digit >= 5)
            {
                roman = roman + "V";
                digit = digit - 5;
            }
            if (digit == 3)
                roman = roman + "III";
            else if (digit == 2)
                roman = roman + "II";
            else if (digit == 1)
                roman = roman + "I";
        }
    }
    else if (symbols == "XLC") //hundreds
    {
        if (digit == 9)
            roman = roman + "XC";
        else if (digit == 4)
            roman = roman + "XL";
        else
        {
            if (digit >= 5)
            {
                roman = roman + "L";
                digit = digit - 5;
            }
            if (digit == 3)
                roman = roman + "XXX";
            else if (digit == 2)
                roman = roman + "XX";
            else if (digit == 1)
                roman = roman + "X";
        }
    }
    else if (symbols == "CDM")
    {
        // Get the 100's digit
        if (digit == 9)
            roman = roman + "CM";
        else if (digit == 4)
            roman = roman + "CD";
        else
        {
            if (digit >= 5)
            {
                roman = roman + "D";
                digit = digit - 5;
            }
            if (digit == 3)
                roman = roman + "CCC";
            else if (digit == 2)
                roman = roman + "CC";
            else if (digit == 1)
                roman = roman + "C";
        }
    }
    else if (symbols == "MMM") //thousands
    {
        // Convert the thousands digit
        // Only three allowed
        if (digit == 3)
            roman= "MMM";
        else if (digit == 2)
            roman= "MM";
        else if (digit == 1)
            roman= "M";
    }
    
    return roman;
}

/**
 * Converts an Arabic number to its Roman equivalent.
 * @param n the number to convert.
 * @return a string reprenting the Roman numeral.
 *
 * @pre the number must be a positive number in range.
 * @post if the number cannot be converted it return an error message
 */
string toRoman(int num)
{
    const string OOR = "OUT OF RANGE";
    int original_num = num;
    
    string roman;

    // Make sure it's in range
    if (num <= 0 or num >= 4000)
    {
        roman = OOR;
    }
    else
    {
        // Convert the thousands digit
        // Only three allowed
        int digit = num / 1000;

        if (digit == 3)
            roman= "MMM";
        else if (digit == 2)
            roman= "MM";
        else if (digit == 1)
            roman= "M";

        // Get the 100's digit
        num = num % 1000;
        digit = num / 100;

        if (digit == 9)
            roman = roman + "CM";
        else if (digit == 4)
            roman = roman + "CD";
        else
        {
            if (digit >= 5)
            {
                roman = roman + "D";
                digit = digit - 5;
            }
            if (digit == 3)
                roman = roman + "CCC";
            else if (digit == 2)
                roman = roman + "CC";
            else if (digit == 1)
                roman = roman + "C";
        }

        // Get the 10s digit
        num = num % 100;
        digit = num / 10;

        if (digit == 9)
            roman = roman + "XC";
        else if (digit == 4)
            roman = roman + "XL";
        else
        {
            if (digit >= 5)
            {
                roman = roman + "L";
                digit = digit - 5;
            }
            if (digit == 3)
                roman = roman + "XXX";
            else if (digit == 2)
                roman = roman + "XX";
            else if (digit == 1)
                roman = roman + "X";
        }

        // Get the 1s digit
        digit = num % 10;

        if (digit == 9)
            roman = roman + "IX";
        else if (digit == 4)
            roman = roman + "IV";
        else
        {
            if (digit >= 5)
            {
                roman = roman + "V";
                digit = digit - 5;
            }
            if (digit == 3)
                roman = roman + "III";
            else if (digit == 2)
                roman = roman + "II";
            else if (digit == 1)
                roman = roman + "I";
        }
    }
    return roman;
}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}