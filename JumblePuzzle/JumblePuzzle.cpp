#include <iostream>
#include "JumblePuzzle.h"
#include <ctime>
#include <cstdlib>
#include <sstream>

using namespace std;
typedef char* charArrayPtr;

BadJumbleException::BadJumbleException(const string& e) : message(e){ }
string& BadJumbleException::what() { return message; }

int JumblePuzzle::getRowPos() const { return row; }
int JumblePuzzle::getColPos() const { return column; }
int JumblePuzzle::getSize() const { return size; }
char JumblePuzzle::getDirection() const { return direction; }

charArrayPtr* JumblePuzzle::getJumble() const
{
    charArrayPtr* getArray = new char*[size];

    for (int i = 0; i < size; i++)
        getArray[i] = new char[size];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++)
            getArray[i][j] = jumbleArray[i][j];
    }
    return getArray;
}

JumblePuzzle::JumblePuzzle()
{
    row = 0;
    column = 0;
    size = 0;
    direction = 0;
    jumbleArray = NULL;
}

JumblePuzzle::JumblePuzzle(const string &wordToHide, const string &difficulty)
{
    // The Alphabet
    const char* alphabet = "abcdefghijklmnopqrstuvwxyz";

    // The Directions:
    string directions = "news";
    direction = directions[rand() % 4];

    // Boolean used for placing the target direction for the hidden word
    bool selectedDirection = true;

    // Randomize
    srand(time(NULL));

    // Convert the word length to the size of the array
    size = wordToHide.size();

    // If the size is less than 3 or greater than 10, it does not meet the requirements and thus an error
    if(size < 3 || size > 10)
    {
        throw BadJumbleException("The length/size of the word must be greater than 3 and less than 10");
    }

    if(difficulty != "easy" && difficulty != "medium" && difficulty != "hard")
    {
        throw BadJumbleException("Invalid Difficulty! Difficulty Levels: 'easy' | 'medium' | 'hard' ");
    }

    // Choosing the size based of difficulty
    if (difficulty == "easy") {size *= 2;}
    else if (difficulty == "medium") {size *= 3;}
    else if (difficulty == "hard") {size *= 4;}

    // Make new array
    jumbleArray = new char*[size];
    for (int n = 0; n < size; n++)
    {
        // Adding a 2nd Dimension to it: Making it a 2D array
        jumbleArray[n] = new char[size];
    }

    // Fill 2D array random letters from the alphabet
    for(int i = 0; i< size; i++)
        for(int j = 0; j < size; j++)
        {
            jumbleArray[i][j] = (char) alphabet[rand() % 26];
        }

    // Choose a random row and column
    row = rand() % size;
    column = rand() % size;

    // Find the same letter in the array that matches the beginning of the hidden word
    jumbleArray[row][column] = wordToHide.at(0);

    /*
     * Here we place the characters for the hidden word:
     * We place the character from the starting position in a random direction
     * If we have an out of bounds placement then we choose another direction
     * The loop terminates when the word has been placed
     */
    while(selectedDirection)
    {
        switch (direction)
        {
            // Moving Up/North
            case 'n':
                for (int i = 1; i < wordToHide.size(); i++)
                {
                    // Out of bounds
                    if ((row-i) < 0)
                    {
                        direction = directions[rand() % 4];
                        break;
                    }

                    // If Last Letter
                    else if (i == (wordToHide.size() - 1))
                    {
                        jumbleArray[row - i][column] = wordToHide.at(i);
                        selectedDirection = false;
                    }

                    else
                        jumbleArray[row - i][column] = wordToHide.at(i);
                }
                break;

            // Moving Right/East
            case 'e':
                for (int i = 1; i < wordToHide.size(); i++)
                {
                    if ((column+i) > (wordToHide.size()-1))
                    {
                        direction = directions[rand() % 4];
                        break;
                    }

                    else if (i == (wordToHide.size() - 1))
                    {
                        jumbleArray[row][column + i] = wordToHide.at(i);
                        selectedDirection = true;
                    }

                    else
                        jumbleArray[row][column + i] = wordToHide.at(i);
                }
                break;

            // Moving Down/South
            case 's':
                for (int i = 1; i < wordToHide.size(); i++)
                {
                    if ((row+i) > (wordToHide.size()-1))
                    {
                        direction = directions[rand() % 4];
                        break;
                    }

                    else if (i == (wordToHide.size() - 1))
                    {
                        jumbleArray[row + i][column] = wordToHide.at(i);
                        selectedDirection = true;
                    }

                    else
                        jumbleArray[row + i][column] = wordToHide.at(i);
                }
                break;

            // Moving Left/West
            case 'w':
                for (int i = 1; i < wordToHide.size(); i++)
                {
                    if ((column - i) < 0)
                    {
                        direction = directions[rand() % 4];
                        break;
                    }

                    else if (i == (wordToHide.size() - 1))
                    {
                        jumbleArray[row][column - i] = wordToHide.at(i);
                        selectedDirection = true;
                    }

                    else
                        jumbleArray[row][column - i] = wordToHide.at(i);
                }
                break;
        }
    }
}

JumblePuzzle::~JumblePuzzle()
{
    // Delete each letter and remove all pointers in the outer array (thus the inside one too)
    for(int i = 0; i < size; i++)
    {
        delete jumbleArray[i];
        jumbleArray[i] = NULL;
    }

    // Delete the array and make it NULL
    delete[] jumbleArray;
    jumbleArray = NULL;
}

JumblePuzzle::JumblePuzzle(const JumblePuzzle& copy)
{
    row = copy.getRowPos();
    column = copy.getColPos();
    size = copy.getSize();
    direction = copy.getDirection();
    jumbleArray = new char*[size];

    // If we get the jumble array, we populate it with a copy of it
    if (copy.getJumble())
    {
        charArrayPtr* newArray = copy.getJumble();

        for (int i = 0; i < size; i++)
            jumbleArray[i] = new char[size];

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                jumbleArray[i][j] = newArray[i][j];
            }
        }
    }
}

JumblePuzzle& JumblePuzzle::operator=(const JumblePuzzle& copy)
{
    if(this != &copy)
    {
        for(int i = 0; i < size; i++)
        {
            delete[] jumbleArray[i];
        }
        delete[] jumbleArray;

        row = copy.getRowPos();
        column = copy.getColPos();
        size = copy.getSize();
        direction = copy.getDirection();
        jumbleArray = new char*[size];

        for(int i = 0; i < size; i++)
        {
            jumbleArray[i] = new char[size];
        }

        for (int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                jumbleArray[i][j] = getJumble()[i][j];
            }

        }
    }
    return *this;
}