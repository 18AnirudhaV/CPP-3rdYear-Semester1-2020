/*
 * Anirudha Verma - 20128760
 * Assignment 5
 */

#include <string>
#include <iostream>
#include "ShapesGood.h"
using namespace std;

/*** Defining the Shape Class ***/
// Base Shape Class
Shape::Shape() {}

// Set the Length and Width
Shape::Shape(int len, int wid, string bC)
{
    length = len;
    width = wid;
    baseColour = bC;
}

// Destructor
Shape::~Shape() {}

// Draw shape
void Shape::draw() {}

// Getters for Length, Width and BaseColour
int Shape::getLength() {return length;}
int Shape::getWidth() {return width;}
string Shape::getBaseColour() {return baseColour;}

/*** Defining the Fillable Class ***/
// Basic function to get the colour to be filled in
Fillable::Fillable(string colour) {fillColour = colour;}

// Destructor
Fillable::~Fillable() {}

// Get the colour we need to fill
string Fillable::getFillColour() const {return fillColour;}

/*** Defining the Text Label Class ***/
// Base function to set the text to be the text label
TextLabel::TextLabel(string textLabel) {text = textLabel;}
// Destructor
TextLabel::~TextLabel() {}
// Get the text
string TextLabel::getText() const {return text;}

/*** Defining the Square Class ***/
// Base Square function using polymorphism
Square::Square(int length, int width, string colour) : Shape(length, width, colour) {}
// Destructor
Square::~Square() {}
// Drawing the square in the colour specified
void Square::draw() {cout << "\nDrawing a square of colour: " + getBaseColour();}

/*** Defining the Filled Square Class ***/
// Base FilledSquare function using polymorphism
FilledSquare::FilledSquare(int len, int wid, string baseColour, string fillColour) : Square(len, wid, baseColour), Fillable(fillColour) {}
// Destructor
FilledSquare::~FilledSquare() {}
// Draw - to fill in the square with the appropriate colours
void FilledSquare::draw() {
    cout << "\nDrawing a square of colour: " + getBaseColour();
    cout << "\nWe are filling it with: " + getFillColour();
}

/*** Defining the Filled Text Square Class ***/
// Base FilledTextSquare function using polymorphism
FilledTextSquare::FilledTextSquare(int len, int wid, string outlineColour, string fillColour, string text) : Square(len, wid, outlineColour), Fillable(fillColour), TextLabel(text) {}
// Destructor
FilledTextSquare::~FilledTextSquare() {}
// Draw - to fill in the square with the appropriate colours and text
void FilledTextSquare::draw() {
    cout << "\nDrawing a square of colour: " + getBaseColour();
    cout << "\nWe are filling it with: " + getFillColour();
    cout << "\nWe are including the text: \"" << getText() << "\".";
}

/*** Defining the Circle Class ***/
// Base Square function using polymorphism
Circle::Circle(int len, int wid, string colour) : Shape(len, wid, colour) {}
// Destructor
Circle::~Circle() {}
// Drawing a circle with the base colour that is chosen
void Circle::draw() {cout << "\nDrawing a circle of colour: " + getBaseColour();}

/*** Defining the Filled Circle Class ***/
// Base FilledCircle function using polymorphism
FilledCircle::FilledCircle(int len, int wid, string baseColour, string fillColour) : Circle(len, wid, baseColour), Fillable(fillColour) {}
// Destructor
FilledCircle::~FilledCircle() {}
// Draw - to fill in the circle with the appropriate colours
void FilledCircle::draw() {
    cout << "\nDrawing a circle of colour: " + getBaseColour();
    cout << "\nWe are filling it with: " + getFillColour();
}

/*** Defining the Arc Class ***/
// Base Arc function using polymorphism
Arc::Arc(int len, int wid, string colour) : Shape(len, wid, colour) {}
// Destructor
Arc::~Arc() {}
// Drawing a circle with the base colour that is chosen
void Arc::draw() {cout << "\nDrawing an arc of colour: " + getBaseColour();}