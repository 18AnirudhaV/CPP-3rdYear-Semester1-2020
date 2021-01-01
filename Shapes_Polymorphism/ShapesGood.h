/*
 * Anirudha Verma - 20128760
 * Assignment 5
 */

#pragma once

#include <string>
using namespace std;

// Class for a shape that we want to create
class Shape {
public:
    Shape();
    Shape(int len, int wid, string bC);
    virtual ~Shape();
    virtual void draw();

    int getLength();
    int getWidth();
    string getBaseColour();
private:
    int length;
    int width;
    string baseColour;
};

// Class for filling in the shape that we create
class Fillable {
public:
    Fillable(string fillColour);
    virtual ~Fillable();

    string getFillColour() const;
private:
    string fillColour;
};

// Text Label for the shape
class TextLabel {
public:
    TextLabel(string textLabel);
    virtual ~TextLabel();

    void drawLabel() const;
    string getText() const;
private:
    string text;
};

// Shape - Drawing a square using Shape class
class Square : public Shape {
public:
    Square(int length, int width, string baseColour);
    virtual ~Square();
    virtual void draw();
};

// Shape, Fillable - Square - Filling in the square using Square and Fillable Class
class FilledSquare : public Square, public Fillable {
public:
    FilledSquare(int length, int width, string baseColour, string fillColour);
    virtual ~FilledSquare();
    virtual void draw();
};

// Shape, Fillable, TextLabel - Draws the text using Square, Fillable and TextLabel Class
class FilledTextSquare : public Square, public Fillable, public TextLabel {
public:
    FilledTextSquare(int length, int width, string baseColour, string fillColour, string textLabel);
    virtual ~FilledTextSquare();
    virtual void draw();
};

// Shape - Draws a circle using Shape class
class Circle : public Shape {
public:
    Circle(int length, int width, string baseColour);
    virtual ~Circle();
    virtual void draw();
};

// Shape, Fillable - Circle - Filling in the Circle using Shape, Fillable and Circle class
class FilledCircle : public Circle, public Fillable {
public:
    FilledCircle(int length, int width, string baseColour, string fillColour);
    virtual ~FilledCircle();
    virtual void draw();
};

// Shape - Draws an arc using the Shape class
class Arc : public Shape {
public:
    Arc(int length, int width, string baseColour);
    virtual ~Arc();
    virtual void draw();
};