// Copyright 2022 UNN-CS
#include "tasks.h"
#include "circle.h"

int main() {
    Circle c(5);
    std::cout << "Radius: " << c.getRadius() << std::endl;
    std::cout << "Ference: " << c.getFerence() << std::endl;
    std::cout << "Area: " << c.getArea() << std::endl;

    std::cout << "Earth Rope Gap: " << calculateEarthRopeGap() << std::endl;
    std::cout << "Pool Cost: " << calculatePoolCost() << std::endl;

    return 0;
}