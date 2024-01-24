#include<iostream>
class Shape {
public:
    virtual float calculateArea() = 0;
};
	
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float calculateArea() override {
        return length * width;
    }
};

int main() {
    float length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rectangle(length, width);

    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}

