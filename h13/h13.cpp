/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID
/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h13.cpp
 */

#include "h13.h"

// Implement your function here
string dataSets(const string& filename)
{
    ifstream in(filename);

    if (in.fail())
    {
        return filename + " cannot be opened." ;
    }



    string result = "";
    int num;
    int set = 1;
    double val;

    while (!in.eof())
    {
        in>>num;
        double sum=0;
        double count = 0;

        while (num != 0) // 0 ends
        {
            in>> val;
            sum += num*val;
            count += num;
            in >>num;
        }



        if (count > 0)
        {

            if (set > 1)
            result = result + "\n";

            if (set >=2 )
            result += "\n";

            double avg = sum/count;

            string average = to_string(round(avg*10000)/10000); //4 zeroes
            string finalavg = average.substr(0,6);


            result += "data set " + to_string(set)
            + ": total values = " + to_string((int) count) + "\n"
            + "average value = " + finalavg;




        }
        set++;
    }
    return result;




}


///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}