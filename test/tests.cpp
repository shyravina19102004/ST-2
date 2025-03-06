// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cmath>

#include "circle.h"
#include "tasks.h"

// Тесты для класса Circle
TEST(CircleTest, Initialization) {
    Circle c(5);
    EXPECT_NEAR(c.getRadius(), 5, 1e-6);
    EXPECT_NEAR(c.getFerence(), 2 * M_PI * 5, 1e-6);
    EXPECT_NEAR(c.getArea(), M_PI * 25, 1e-6);
}

TEST(CircleTest, SetRadius) {
    Circle c(5);
    c.setRadius(10);
    EXPECT_NEAR(c.getRadius(), 10, 1e-6);
    EXPECT_NEAR(c.getFerence(), 2 * M_PI * 10, 1e-6);
    EXPECT_NEAR(c.getArea(), M_PI * 100, 1e-6);
}

TEST(CircleTest, SetFerence) {
    Circle c(5);
    c.setFerence(2 * M_PI * 10);
    EXPECT_NEAR(c.getRadius(), 10, 1e-6);
    EXPECT_NEAR(c.getArea(), M_PI * 100, 1e-6);
}

TEST(CircleTest, SetArea) {
    Circle c(5);
    c.setArea(M_PI * 100);
    EXPECT_NEAR(c.getRadius(), 10, 1e-6);
    EXPECT_NEAR(c.getFerence(), 2 * M_PI * 10, 1e-6);
}

// Тесты для задачи "Земля и верёвка"
TEST(EarthRopeTest, GapCalculation) {
    double gap = calculateEarthRopeGap();
    EXPECT_NEAR(gap, 0.159, 1e-3);
}

// Тесты для задачи "Бассейн"
TEST(PoolCostTest, CostCalculation) {
    double cost = calculatePoolCost();
    double expectedCost = 1000 * (M_PI * 16 - M_PI * 9) + 2000 * 2 * M_PI * 4;
    EXPECT_NEAR(cost, expectedCost, 1e-2);
}
