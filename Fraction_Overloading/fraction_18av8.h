/*
 * Anirudha Verma (20128760)
 * Assignment 2 - CISC 320
 *
 * EMERGENCY: I accidentally used the terms numerator and denominator as variables, please change this code in the test function:
 *
 Test accessors
	cout << "Numerator should be -7: " << test4.numerator() << endl;
	cout << "Denominator should be 2: " << test4.deninator() << endl;

 TO:

 Test accessors
	cout << "Numerator should be -7: " << test4.num() << endl;
	cout << "Denominator should be 2: " << test4.den() << endl;

* Thank you!
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#ifndef FRACTION_FRACTION_18AV8_H
#define FRACTION_FRACTION_18AV8_H

using namespace std;

class Fraction{
public:

    // Return both numerator and denominator
    int num() const;
    int den() const;

    // Simplify/Normalize Fraction [using GCD]
    void simplify();

    // Constructors for all input types
    Fraction();
    Fraction(int single);
    Fraction(int num, int den);

    // Addition and Assignment
    Fraction& operator+= (const Fraction& a);
    // Pre Increment
    Fraction& operator++ ();
    // Post Increment
    Fraction operator++ (int unused);

    // Copy's the numerator and denominator for reuse in pre-post increment
    Fraction copy() const;

private:
    // Numerator and Denominator initialize
    int numerator;
    int denominator;

    // Greatest Common Denominator - Using Assignment Description
    int GCD (const int num,const int dum) const;

    // Fraction Input
    friend istream& operator>>(istream& inStream, Fraction& f1);

    // Fraction output (x/y)
    friend ostream& operator<<(ostream& outStream, const Fraction& f1);
};

// Negation
Fraction operator- (const Fraction& f1);

// Addition
Fraction operator+ (const Fraction& f1, const Fraction& f2);

// Subtraction
Fraction operator- (const Fraction& f1, const Fraction& f2);

// Multiplication
Fraction operator* (const Fraction& f1, const Fraction& f2);

// Division
Fraction operator/ (const Fraction& f1, const Fraction& f2);

// Less than
bool operator< (const Fraction& f1, const Fraction& f2);

// Less than or Equal
bool operator<= (const Fraction& f1, const Fraction& f2);

// Equal
bool operator== (const Fraction& f1, const Fraction& f2);

// Not Equal
bool operator!= (const Fraction& f1, const Fraction& f2);

// Greater than or Equal
bool operator>= (const Fraction& f1, const Fraction& f2);

// Greater than
bool operator> (const Fraction& f1, const Fraction& f2);

// Fraction Exception Class for the messages
class FractionException {
public:
    FractionException(const string& error);
    // Convert to string
    string& what();
private:
    string error;
};

#endif //FRACTION_FRACTION_18AV8_H