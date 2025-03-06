// Copyright 2023 Your Name
#include <iostream>
#include "circle.h"
#include "tasks.h"

double calculateEarthRopeGap() {
    double earthRadius = 6378100;  // радиус Земли в метрах
    Circle earth(earthRadius);

    double ropeLength = earth.getFerence() + 1;  // добавляем 1 метр
    earth.setFerence(ropeLength);

    double gap = earth.getRadius() - earthRadius;  // вычисляем зазор
    return gap;
}

double calculatePoolCost() {
    double poolRadius = 3;  // радиус бассейна в метрах
    double pathWidth = 1;  // ширина дорожки в метрах
    double concreteCostPerSquareMeter = 1000;  // стоимость бетона
    double fenceCostPerMeter = 2000;  // стоимость ограды

    Circle pool(poolRadius);
    Circle poolWithPath(poolRadius + pathWidth);

    double concreteArea = poolWithPath.getArea() - pool.getArea();
    double fenceLength = poolWithPath.getFerence();

    double totalConcreteCost = concreteArea * concreteCostPerSquareMeter;
    double totalFenceCost = fenceLength * fenceCostPerMeter;

    return totalConcreteCost + totalFenceCost;
}

int main() {
    Circle c(5);
    std::cout << "Radius: " << c.getRadius() << std::endl;
    std::cout << "Ference: " << c.getFerence() << std::endl;
    std::cout << "Area: " << c.getArea() << std::endl;

    std::cout << "Earth Rope Gap: " << calculateEarthRopeGap() << std::endl;
    std::cout << "Pool Cost: " << calculatePoolCost() << std::endl;

    return 0;
}
