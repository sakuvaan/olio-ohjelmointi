#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main ()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch (selection)
        {
        case 0:
        {
            std::string Name;
            int Age;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Enter students name: ";
            cin >> Name;
            cout << "Enter students age: ";
            cin >> Age;

            // Lisää uusi student StudentList vektoriin.
            Student student1(Name, Age);
            studentList.push_back(student1);
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan algoritmikirjaston sort funktion avulla
            std::sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getName() < b.getName();
            });

            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan algoritmikirjaston sort funktion avulla
            std::sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getAge() < b.getAge();
            });

            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (Student& student : studentList) {
                student.printStudentInfo();
            }
            break;

        case 4:
        {
            std::string nameToSearch;
            // Kysy käyttäjältä opiskelijan nimi
            cout << "Enter student's name: ";
            cin >> nameToSearch;

            // Etsi studentListan opiskelijoista algoritmikirjaston find_if funktion avulla löytyykö käyttäjän antamaa nimeä listalta.
            auto it = std::find_if(studentList.begin(), studentList.end(),
                                   [&nameToSearch](Student& student) {
                                       return student.getName() == nameToSearch;
                                   });

            // Jos löytyy, niin tulosta opiskelijan tiedot.
            if (it != studentList.end()) {
                it->printStudentInfo();
            } else {
                cout << "Name not found!" << endl;
            }
            break;
        }

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    } while (selection < 5);

    return 0;
}
