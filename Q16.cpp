#include <iostream>
#include <string> 

class Student { 
  private: 
    std::string name;
    std::string studentClass;
    int rollNumber; 
    double marks; 

  public:

    Student(const std::string & studentName, const std::string & sClass, int rollNum, double studentMarks)
        : name(studentName), studentClass(sClass), rollNumber(rollNum), marks(studentMarks) {}

    std::string calculateGrade() {
      if (marks >= 90) {
        return "A+";
      } else if (marks >= 80) {
        return "A";
      } else if (marks >= 70) {
        return "B";
      } else if (marks >= 60) {
        return "C";
      } else {
        return "D";
      }
    }

    void displayInformation() {
      std::cout << "\n\nName: " << name << std::endl;
      std::cout << "Class: " << studentClass << std::endl;
      std::cout << "Roll Number: " << rollNumber << std::endl;
      std::cout << "Marks: " << marks << std::endl;
      std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
  std::string studentName;
  std::string sClass;
  int rollNum;
  double studentMarks;

  std::cout << "Student details: ";
  std::cout << "\nName: ";
  std::getline(std::cin, studentName);

  std::cout << "Class: ";
  std::getline(std::cin, sClass);

  std::cout << "Roll number: ";
  std::cin >> rollNum;

  std::cout << "Enter Marks: ";
  std::cin >> studentMarks;

  Student student(studentName, sClass, rollNum, studentMarks);

  student.displayInformation();

  return 0;
}

