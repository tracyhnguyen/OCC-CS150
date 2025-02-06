/**
    @file h28.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
    // DO NOT MODIFY IN ANY WAY
*/
#ifndef H28_H_
#define H28_H_

/** A bug climbing a pole.  */
class Bug
{
public:
    Bug(int startPos);      // construct Bug at starting position
    void move();            // move bug one unit in direction
    void turn();            // Change the direction from left to right or vice-versa
    int position() const;   // Return the position
private:
    int m_position;
    int m_direction;
};

#endif
