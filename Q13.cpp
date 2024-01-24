#include <iostream>
using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isEquilateral() const {
        return side1 == side2 && side2 == side3;
    }

    bool isIsosceles() const {
        return side1 == side2 || side1 == side3 || side2 == side3;
    }

    bool isScalene() const {
        return side1 != side2 && side1 != side3 && side2 != side3;
    }
};

int main() {
	
    Triangle t1(3.0, 3.0, 3.0); 
    Triangle t2(3.0, 4.0, 3.0); 
    Triangle t3(4.0, 5.0, 6.0); 

    std::cout << "Triangle t1 is " << (t1.isEquilateral() ? "equilateral" : "not equilateral") << std::endl;
    std::cout << "Triangle t2 is " << (t2.isIsosceles() ? "isosceles" : "not isosceles") << std::endl;
    std::cout << "Triangle t3 is " << (t3.isScalene() ? "scalene" : "not scalene") << std::endl;

    return 0;
}

