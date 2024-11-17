#include <iostream>
#include <memory>
#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(const std::string& studentName) {
        name = studentName;
    }

    void setStudentNumber(int number) {
        studentNumber = number;
    }

    void setAverage(double avg) {
        average = avg;
    }

    std::string getName() const {
        return name;
    }

    int getStudentNumber() const {
        return studentNumber;
    }

    double getAverage() const {
        return average;
    }
    void resetName();
    void resetStudentNumber();
    void resetAverage();
};

int main() {
    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->setName("Milla Magia");
    student->setStudentNumber(12345);
    student->setAverage(3.7);

    std::cout << "Student Info:" << std::endl;
    std::cout << "Name: " << student->getName() << std::endl;
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Average: " << student->getAverage() << std::endl;

    return 0;
}

void Student::resetName()
{
    setName({});
}

void Student::resetStudentNumber()
{
    setStudentNumber({});
}

void Student::resetAverage()
{
    setAverage({});
}
