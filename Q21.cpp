#include <iostream>

class Students {
protected:
    int roll_number;

public:
    Students(int roll) : roll_number(roll) {
    }
};

class Test : public Students {
protected:
    int subject1_marks;
    int subject2_marks;

public:
    Test(int roll, int marks1, int marks2) : Students(roll), subject1_marks(marks1), subject2_marks(marks2) {
    }
};

class Result : public Test {
private:
    int total_marks;

public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {
        calculateTotalMarks();
    }

    void calculateTotalMarks() {
        total_marks = subject1_marks + subject2_marks;
    }

    void displayResult() {
        std::cout << "\nRoll Number: " << roll_number << std::endl;
        std::cout << "Subject 1 Marks: " << subject1_marks << std::endl;
        std::cout << "Subject 2 Marks: " << subject2_marks << std::endl;
        std::cout << "Total Marks: " << total_marks << std::endl;
    }
};

int main() {
	int rn,s1,s2;
	std::cout << "Enter Roll Number: " ;
	std::cin>>rn;
        std::cout << "\nEnter Subject 1 Marks: " ;
        std::cin>>s1;
        std::cout << "\nEnter Subject 2 Marks: " ;
        std::cin>>s2;
    Result resultInstance(rn,s1,s2);
    resultInstance.displayResult();

    return 0;
}

