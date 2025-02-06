/**
 *  @author Tracy Nguyen
 *  @date March 22, 2022
 *  @file h12.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

// Write your function here
void strip()
{
    bool inSingleCmt = false;
    bool inMultiCmt = false;
    bool inString = false;
    
    char ch;
    while(cin.get(ch))
    {
        if (inSingleCmt && ch == '\n')
        {
            inSingleCmt = false;
        }
        else if (inString && ch == '\"')
        {
            inString = false;
        }
        else if (inMultiCmt && ch == '*' && cin.peek() == '/')
        {
            cin.get(ch);
            ch = cin.peek();
            cin.get(ch);
            inMultiCmt = false;
        }
        else if (!inString && !inSingleCmt && !inMultiCmt)
        {
            if(ch == '\"')
            {
                inString = true;
            }
            else if (ch == '/' && cin.peek() == '*')
            {
                inMultiCmt = true;
            }
            else if (ch == '/' && cin.peek() == '/')
            {
                inSingleCmt = true;
            }
        }
        else if (inString && ch == '\\' && cin.peek() == '"')
        {
            cout.put(ch);
            cin.get(ch);
        }
        if (cin && !inSingleCmt && !inMultiCmt)
        {
            cout.put(ch);
        }
    }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}