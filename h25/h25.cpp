/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
/**
 * Reverses the C-style string pointed to by s.
 *
 * @param s a pointer to the character in a C-style string.
 */
void reverse(char * s)
{
    char* sptr = s; //last element
    while(*sptr) sptr++; //get to the last element
    sptr--; //dont get past the last element
    char temp;
    while (s<sptr) //while not middle element;
    {
        temp = *s;
        *s = *sptr;
        *sptr = temp;
        s++;
        sptr--;
    }
}

/**
 * Finds the first occurrence of str2 which appears in str1.
 * Returns a pointer to the first occurrence of str2 in str1.
 * If no match is found, then a null pointer is returned.
 * If str2 points to a string of zero length, then the argument str1 is returned.
 *
 * @param str1 C-string to search through.
 * @param str2 C-string to search for.
 * @return
 */
const char * findStr(const char *str1, const char *str2)
{
    const char* p = str1; // p is search
    const char* p1 = str2; // points to pointer to search
    const char* p2 = str1; // p2 is target
    while (*p)
    {
        p1 = p;
        p2 = str2;
        while (*p1 && *p2 && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0') return p;
        p++;
   }
   return nullptr;
}



//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}