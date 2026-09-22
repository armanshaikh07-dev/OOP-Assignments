#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNumber;
    string name;
    string department;
    float cgpa;

    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter department: ";
        cin >> department;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}

