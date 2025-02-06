/**
 *  @author Tracy Nguyen
 *  @date April 11, 2022
 *  @file h17.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID


#include "h17.h"

// Implement the function here

/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */
vector<string> fileToWords(const string& filename)
{
    ifstream in{filename};
    if (in.fail()) throw invalid_argument("File can't be opened");
    
    vector<string> results;
    string word;
    while (getline(in, word))
    {
        results.push_back(word);
    }
    return results;
}




/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}