#include<iostream>
#include "Shape.h"
using namespace std;

int main() {
    
    Rectangle rect;
    Triangle tri;
    rect.set_data(4,5);
    double Rearea = rect.area();
    tri.set_data(8,9);
    double Triarea = tri.area();
    std::cout<< "Rectangle Area:"<< Rearea << std::endl;
    std::cout<< "triangle Area:" << Triarea << std::endl;
    
    return 0;
}