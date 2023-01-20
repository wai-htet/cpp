/*Write a program that defines a shape class with a constructor that 
gives value to width and height. The define two sub-classes triangle 
and rectangle, that calculate the area of the shape area (). 
In the main, define two variables a triangle and a rectangle
 and then call the area() function in this two varibles. */


#pragma once

class Shape
{
protected:
    /* data */
    float width, height;

public:
    void set_data(float a, float b); 
};

class Rectangle: public Shape
{
public:
    float area();
};

class Triangle: public Shape
{
public:
    float area();
    
};
