#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {

    Rectangle myRectangle(5.0,3.0);

    // Calculate and display the area and perimeter
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}

