#include<iostream>
#include "Shape.h"

using namespace std;

void Shape::set_data(float a, float b)
    {
        width = a;
        height = b;
    }
float Rectangle::area()
    {
        return ( width * height);
    }
float Triangle::area()
    {
        return (width * height/2);      
    }



