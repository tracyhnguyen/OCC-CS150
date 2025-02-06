/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h24.cpp
 */
#include <string>
#include <stdexcept>
#include <iostream>
// Other headers if necessary
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h24.h"

// Add your code here
bool helper(const int *aBeg, const int *aEnd, const int *bBeg, const int *bEnd)
{
    bool found = false;
    const int* aptr = aBeg;
    const int* bptr = bBeg;
    while (*aptr) //while a doesnt reach end
    {
        while (!found && bptr!=bEnd) //while match isnt found and b didnt reach end
        {
            if (*aptr == *bptr) //if avalue found in bvalue
            {
                found = true; //break out of while, found = true
            }
            else
            {
                bptr++;
            }
        }
        if (!found) return false; //if match not found and it reached end of b, return false
        bptr = bBeg; //reset bptr to beginning of b
        aptr++; //if match found, keep going
        found = false; //reset found
    }
    return true;
}
/**
 * sameSet: checks if a and b have the same set of ints.
 *  - ignores multiplicity and order.
 *
 * @param a array of const int.
 * @param aEnd a pointer to past-the-end of a.
 * @param b array of const int.
 * @param bEnd pointer to past-the-end of b.
 *
 * @pre #aEnd and #bEnd are > a and b
 *
 * @return true if a and b have the "same set" as described above.
 * @examples:
 *      1  4  9  16  9  7  4  9  11 and 11  11  7  9  16  4  1 are same set
 *      3 1 1 11 and 3 11 11 7 are not the same set because b contains a 7
 *
 */
bool sameSet(const int *aBeg, const int *aEnd, const int *bBeg, const int *bEnd)
{
    return (helper(aBeg, aEnd, bBeg, bEnd) && helper(bBeg, bEnd, aBeg, aEnd));

    // bool found = false;
    // int i=*aBeg;
    // while (i!=*aEnd && !found) //loops thru whole a array
    // {
    //     if (*(aBeg+i) == *(bBeg+i)) found = true;
    //     i++;
    // }
    // return (found);
}

/**
 * Copies all even numbers from a to b.
 *
 * @param a array of const int.
 * @param aSize size of array a.
 * @param[out] b array of int to be filled in with even numbers.
 * @param[int, out] bSize declared size of b on entry; returns number of elements copied.
 *
 * @pre bSize >= aSize
 * @post b filled with even numbers from a.
 *      bSize set to number of even values copied.
 *
 * @throw illegal_length exception if size of b < size of a
 *
 */
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
    if (bSize <aSize) throw length_error("Error");
    bSize = 0;
    for (size_t i=0; i<aSize; ++i)
    {
        if (a[i]%2 == 0)
        {
            b[bSize] = a[i];
            bSize++;
        }
    }
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}