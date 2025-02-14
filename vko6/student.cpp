#include "student.h"

Student::Student(std::string n, int a) : Name(n), Age(a) {}

void Student::setAge(int a)
{
    Age = a;
}

void Student::setName(std::string n)
{
    Name = n;
}

std::string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    std::cout << "Student: " << Name << ", Age: " << Age << std::endl;
}
