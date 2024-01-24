#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    Car() : year(0) {}

    void setCompany(const std::string& c) {
        company = c;
    }

    void setModel(const std::string& m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    std::string getCompany() const {
        return company;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    Car myCar;

    myCar.setCompany("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2022);

    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}

