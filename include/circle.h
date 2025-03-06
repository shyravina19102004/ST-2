// Copyright 2023 Your Name
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_

class Circle {
 private:
    double radius;
    double circumference;
    double area;

    void calculateFromRadius();
    void calculateFromCircumference();
    void calculateFromArea();

 public:
    explicit Circle(double radius);

    void setRadius(double radius);
    void setCircumference(double circumference);
    void setArea(double area);

    double getRadius() const;
    double getCircumference() const;
    double getArea() const;
};

#endif  // INCLUDE_CIRCLE_H_
