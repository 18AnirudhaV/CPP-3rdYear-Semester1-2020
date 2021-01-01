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
#include "fraction_18av8.h"

using namespace std;

// Return Numerator
int Fraction::num() const{
    return numerator;
}

// Return Denominator
int Fraction::den() const{
    return denominator;
}

// Greatest Common Denominator - Using the logic from the assignment description
int Fraction::GCD(const int n, const int m) const{
    // m <= n and n%m = 0
    if(m <= n && n % m == 0){
        return m;
    }

    // if n < m
    else if(n < m){
        return GCD(m, n);
    }

    // otherwise
    else
    {
        return GCD(m, n % m);
    }
}

// Simplifying/Normalizing a fraction: Using the GCD against the Numerator and Denominator
void Fraction::simplify() {
    // Get the GCD
    int gcd = GCD(abs(numerator),abs(denominator));

    // Checking if the fraction has the same binary operator in front
    if((numerator < 0 && denominator < 0) || (numerator > 0 && denominator > 0))
    {
        numerator = abs(numerator)/gcd;
        denominator = abs(denominator)/gcd;
    }

    // They have different binary operators in either num or den
    else
    {
        numerator = abs(numerator)/gcd;
        denominator = -abs(denominator)/gcd;
    }
}

// No Input: Fraction = 0/1
Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}

// Single Input: Fraction = n/1
Fraction::Fraction(const int n){
    numerator = n;
    denominator = 1;
}

// Double Input: Fraction = n/d
Fraction::Fraction(const int n, const int d){
    if(d == 0)
        throw FractionException("Error, 0 cannot be the denominator");
    numerator = n;
    denominator = d;
    simplify();
}

// Copy the fraction for ++ use
Fraction Fraction::copy() const {
    return Fraction(numerator, denominator);
}

// += Addition and Assignment
Fraction& Fraction::operator+= (const Fraction& f1){
    numerator = numerator * f1.den() + denominator * f1.num();
    denominator = denominator * f1.den();
    simplify();

    return *this;
}

// ++ Preincrement
Fraction& Fraction::operator++(){
    numerator += denominator;
    simplify();
    return *this;
}

// ++ Postincrement
Fraction Fraction::operator++(int a) {
    Fraction temp(*this);
    ++*this;
    return temp;
}

// Output stream: Fraction output = num/den
ostream& operator<<(ostream& out, const Fraction& f1) {
    out << f1.num() << "/" << f1.den();
    return out;
}

// Input stream:
istream& operator>>(istream& in, Fraction& f1) {

    string value;
    in >> value;
    size_t found = value.find("/");

    if(found != string::npos) {
        int top = atoi(value.substr(0, found).c_str());;
        int bottom = atoi(value.substr(found + 1).c_str());

        if(top == 0 && bottom != 0) {
            f1.numerator = 0;
            f1.denominator = 1;
        }
        else if(top == 0 && bottom == 0) {
            throw FractionException("Error, 0 cannot be the denominator");
        }

        else {
            f1.numerator = top;
            f1.denominator = bottom;
        }

    }
    else if(!value.empty()) {

        if(atoi(value.c_str()) == 0) {
            f1.numerator = 0;
            f1.denominator = 1;
        }

        else {
            f1.numerator = atoi(value.c_str());
            f1.denominator = 1;
        }
    }
    return in;
}

//Negation
Fraction operator-(const Fraction& f1) {
    return Fraction(-f1.num(), f1.den());
}

// Addition
Fraction operator+ (const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.num() * f2.den() + f2.num() * f1.den(), f1.den() * f2.den());
}

// Subtraction
Fraction operator- (const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.num() * f2.den() - f2.num() * f1.den(), f1.den() * f2.den());
}

// Multiplication
Fraction operator* (const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.num() * f2.num(), f1.den() * f2.den());
}

// Division
Fraction operator/ (const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.num() * f2.den(), f1.den() * f2.num());
}

// Less Than
bool operator< (const Fraction& f1, const Fraction& f2) {
    return (f1.num() * f2.den() < f2.num() * f1.den());
}

// Less Than or Equal
bool operator<= (const Fraction& f1, const Fraction& f2) {
    return (f1.num() * f2.den() <= f2.num() * f1.den());
}

// Equal
bool operator== (const Fraction& f1, const Fraction& f2) {
    return (f1.num() * f2.den() == f2.num() * f1.den());
}

// Not Equal
bool operator!= (const Fraction& f1, const Fraction& f2) {
    return (f1.num() * f2.den() != f2.num() * f1.den());
}

// Greater than or Equal
bool operator>= (const Fraction& f1, const Fraction& f2) {
    return (f1.num() * f2.den() >= f2.num() * f1.den());
}

// Greater than
bool operator> (const Fraction& f1, const Fraction& f2) {
    return (f1.num() * f2.den() > f2.num() * f1.den());
}

FractionException::FractionException(const string& message) : error(message) {}
string& FractionException::what() { return error; }