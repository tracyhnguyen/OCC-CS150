/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h18.h"

// Place your function here
string clean(const string& word)
{
    int len = word.size();
    string temp = "";
    for (const auto& c : word)
    {
        if (!ispunct(c))
        {
            temp += tolower(c);
        }
    }
    return temp;
}

vector<Word> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
    vector<Word> results;
    while(!in.eof())
    {
        int currentpos = in.tellg();
        if (currentpos == -1)
        {
            break;
        }
        string wd = "";
        in >> wd >> ws;

        wd = clean(wd);
        try
        {
            int resultslen = results.size();

            for (int i = 0; i < resultslen; i++)
            {
                if (wd == results.at(i).word)
                {

                    results.at(i).positions.push_back(currentpos);
                    throw 1;
                }
            }


            int excludelen = excluded.size();
            for (int i = 0; i < excludelen; i++)
            {
                if (wd == excluded.at(i))
                {
                    throw 1;
                }
            }
            int dictlen = dictionary.size();
            for (int i = 0; i < dictlen; i++)
            {
                if (wd == dictionary.at(i))
                {
                    throw 1;
                }

            }
        }
    catch (...)
    {
        continue;
    }
    Word test;
    test.word = wd;
    test.positions = {currentpos};

    results.push_back(test);

    }


    return results;
}


/////////////// STUDENT TESTING ////////////////////
vector<string> fileToWords(const string& filename);
#include <sstream>
#include <iomanip>
int run()
{
    cout << "Student testing" << endl;
    // vector<string> dictionary = fileToWords("words");
    // vector<string> ignore = fileToWords("excluded.txt");
    // istringstream words("Now is the tyme for all good studunts to "
    //     "come to the aiid of their ai!id classmaates.");
    // vector<Word> misspelled = spellCheck(words, dictionary, ignore);
    // cout << "Misspelled words" << endl;
    // int i{1};
    // for (const auto& e : misspelled)
    // {
    //     cout << setw(4) << i++ << ". " << e.word << ", [ ";
    //     for (auto pos : e.positions)
    //         cout << pos << " ";
    //     cout << "]" << endl;
    // }

    return 0;
}