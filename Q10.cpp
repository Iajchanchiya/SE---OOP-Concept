#include<iostream>
uisng namespace std;
class Calculator {
private:
    float num1;
    float num2;

public:
    Calculator(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cout << "Cannot divide by zero." << std::endl;
            return 0;
        }
    }
};

int main() {
    float num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Calculator calculator(num1, num2);

    std::cout << "Addition: " << calculator.add() << std::endl;
    std::cout << "Subtraction: " << calculator.subtract() << std::endl;
    std::cout << "Multiplication: " << calculator.multiply() << std::endl;
    std::cout << "Divison: " << calculator.divide() << std::endl;

    return 0;
}


