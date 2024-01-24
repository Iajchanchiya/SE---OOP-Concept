#include <iostream>

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2,resMulti,cubevalue;
    std::cout << "Enter two values for multiplication: ";
    std::cin >> num1 >> num2;

    resMulti = multiply(num1, num2);
    std::cout << "Multiplication: " << resMulti << std::endl;

    std::cout << "Enter value for cube calculation: ";
    std::cin >> cubevalue;

    int resultCube = cube(cubevalue);
    std::cout << "Result of Cube: " << resultCube << std::endl;

    return 0;
}

