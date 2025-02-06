/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h26.h"
// Add your code here

/**
 * Read integers from a stream into a FlexArray.
 * @param[in] in the stream to read from.
 * @param[out] the FlexArray to store the data in
 * @return a reference to the modified FlexArray
 * @post size_ will contain the number of elements
 * @post data_ will contain exactly size_ elements
 * @post in will be at end of file or a non-integer
 */
FlexArray& readData(std::istream& in, FlexArray& a)
{
    size_t capacity = INITIAL_CAPACITY;
    a.data_.reset(new int[capacity]);

    int num;
    while (in >> num)
    {
        if (a.size_ >= capacity) // if no more space creates a new unique pointer and transfers over
        {
            capacity*=2;
            unique_ptr<int[]> temp{new int[capacity]};

            for (size_t i=0; i<a.size_; i++)
            {
                temp[i] = a.data_[i];
            }
            a.data_.reset(temp.release());
        }

        a.data_[a.size_] = num;
        a.size_++;
    }

    unique_ptr<int[]> temp{new int[a.size_]};

    for (size_t i=0; i<a.size_; i++)
    {
        temp[i] = a.data_[i];
    }
    a.data_.reset(temp.release());

    return a;
}

/**
 * Return a string representation of a FlexArray.
 * @param a the array to represent.
 * @return a comma separated, brace delimited contents.
 */
std::string toString(const FlexArray& a)
{
    string result = "{";
    if (a.size_ > 0)
    {
        result += to_string(a.data_[0]);
        for (size_t i=1; i<a.size_; i++)
        {
            result += ", " + to_string(a.data_[i]);
        }
    }
    return result + "}";
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}