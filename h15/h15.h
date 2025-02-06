/**
    @file h15.h
    @author Tracy Nguyen
    @data Spring CS150 TTAFT
*/
#include <sstream>
#ifndef H15_H_
#define H15_H_

// Your code here
template <typename T>
std::string to_string(const T& a)
{
    std::ostringstream out;
    out << std::fixed << a;
    return out.str();
}

#endif

