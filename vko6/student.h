#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
private:
    std::string Name;
    int Age;


public:
    Student(std::string n, int a);
    void setAge(int a);
    void setName(std::string n);
    std::string getName();
    int getAge();
    void printStudentInfo();
};

#endif // STUDENT_H
