/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h23.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here
MinMax minMax(const double *ptr, size_t size)
{
    MinMax p;
    if (size== 0) return p;
    p.min = ptr;
    p.max = ptr;
    auto end = ptr + size;
    while (ptr != end)
    {
        if (*ptr<=*p.min)
        {
            p.min = ptr;
        }
        if(*ptr >= *p.max)
        {
            p.max= ptr;
        }

    ptr++;


    }


    return p;
}

int alternatingSum(const int a[], size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        int hold = a[i];
        if (i%2== 0) //even then add
        {
            sum += hold;
        }
        else
        {
            sum-= hold;
        }


    }
    return sum;
}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}