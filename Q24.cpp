#include <iostream>
using namespace std;
class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        return a / b;
    }

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        return a / b;
    }
};

int main() {
    MathOperations math;

    std::cout << "Integer Operations:" << std::endl;
    std::cout << "Addition: " << math.add(10, 5) << std::endl;
    std::cout << "Subtraction: " << math.subtract(10, 5) << std::endl;
    std::cout << "Multiplication: " << math.multiply(10, 5) << std::endl;
    std::cout << "Division: " << math.divide(10, 5) << std::endl;

    std::cout << "\nDouble Operations:" << std::endl;
    std::cout << "Addition: " << math.add(10.5, 5.2) << std::endl;
    std::cout << "Subtraction: " << math.subtract(10.5, 5.2) << std::endl;
    std::cout << "Multiplication: " << math.multiply(10.5, 5.2) << std::endl;
    std::cout << "Division: " << math.divide(10.5, 5.2) << std::endl;

    return 0;
}

