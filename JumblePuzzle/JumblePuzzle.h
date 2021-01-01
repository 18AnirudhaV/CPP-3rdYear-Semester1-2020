/*
 * Anirudha Verma (20128760)
 *
 */

#ifndef A4_JUMBLEPUZZLE_H
#define A4_JUMBLEPUZZLE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
typedef char* charArrayPtr;

class BadJumbleException
{
public:
    BadJumbleException(const string&); //Gives a customized message for Jumble Exceptions
    string& what();
private:
    string message;
};

class JumblePuzzle
{
public:
    // Default constructor - set all to 0/Null
    JumblePuzzle();

    // Constructor for the puzzle with the hidden word and difficulty
    JumblePuzzle(const string& wordToHide, const string& difficulty);

    // Destructor - Delete the puzzle
    ~JumblePuzzle();

    // Copy Puzzle
    JumblePuzzle(const JumblePuzzle& copy);

    // Operator overloading - copies an existing puzzle
    JumblePuzzle& operator=(const JumblePuzzle& copy);


    // Getters:
    // Gets the size of the grid, returns either the width or height
    int getSize() const;
    // Gets the row position
    int getRowPos() const;
    // Gets the column position
    int getColPos() const;
    // Gets the direction the word is facing - north,east,south,west
    char getDirection() const;
    // Gets the matrix
    charArrayPtr* getJumble() const;

private:
    int row;
    int column;
    int size;
    char direction;
    charArrayPtr* jumbleArray;
};

#endif //A4_JUMBLEPUZZLE_H
