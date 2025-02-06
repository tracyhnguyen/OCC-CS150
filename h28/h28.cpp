/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement your class here
Bug::Bug(int startPos)
{
    m_position = startPos;
    m_direction = 1;
}
void Bug::move()
{
    m_position = m_position + (1*m_direction);
}
void Bug::turn()
{
    if (m_direction == 1) // right
    {
        m_direction = -1; // left
    }
    else if (m_direction == -1)
    {
        m_direction = 1;
    }
}
int Bug::position() const
{
    return m_position;
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
int run()
{
    cout << "Add your own tests here" << endl;
    // Bug fred(3);
    // fred.move();
    // cout << "fred is now at " << fred.position() << endl;

    return 0;
}