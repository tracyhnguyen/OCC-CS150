#ifndef H10_H_
#define H10_H_
/**
    @file h10.h
    @author
    @version
*/
#include <string>

// Place your prototypes here
bool read(const std::string&, int&, bool);
bool read(const std::string&, double&, bool);
bool read(const std::string&, std::string&, bool);
bool read(char&, char);

#endif
