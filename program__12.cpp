#include <iostream>
#include <cmath> // for mathematical functions like pi and square root
using namespace std;

// Abstract base class Shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double calculateArea() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Function to calculate area of circle
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    // Constructor to initialize side
    Square(double s) : side(s) {}

    // Function to calculate area of square
    double calculateArea() const override {
        return side * side;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructor to initialize base and height
    Triangle(double b, double h) : base(b), height(h) {}

    // Function to calculate area of triangle
    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    // Create objects of different shapes
    Circle circle(5.0);
    Square square(4.0);
    Triangle triangle(3.0, 6.0);

    // Calculate and display area of each shape
    cout << "Area of Circle: " << circle.calculateArea() << endl;
    cout << "Area of Square: " << square.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;

    return 0;
}
