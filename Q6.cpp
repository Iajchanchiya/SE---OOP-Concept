#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() const {
        return 2 * 3.14159 * radius;
    }
};
int main() {
	
	float value;
	
	std::cout <<"Enter Value";
	std::cin>>value;
	
    Circle m1(value);

    std::cout << "Radius: " << m1.getRadius() << std::endl;
    std::cout << "Area: " << m1.calculateArea() << std::endl;
    std::cout << "Circumference: " << m1.calculateCircumference() << std::endl;

    m1.setRadius(7.5);
    std::cout << "\nUpdated Radius: " << m1.getRadius() << std::endl;
    std::cout << "Updated Area: " << m1.calculateArea() << std::endl;
    std::cout << "Updated Circumference: " << m1.calculateCircumference() << std::endl;

    return 0;
}

