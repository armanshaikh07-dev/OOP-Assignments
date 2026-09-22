#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int RegNo;
    string Name;
    string CollegeDepartmentName;

    Student(int RegNo, string Name, string CollegeDepartmentName)
    {
        this->RegNo = RegNo;
        this->Name = Name;
        this->CollegeDepartmentName = CollegeDepartmentName;
    }

    void display()
    {
        cout << "------Student Details------" << endl;
        cout << "RegNo = " << this->RegNo << endl;
        cout << "Name = " << this->Name << endl;
        cout << "CollegeDepartmentName = " << this->CollegeDepartmentName << endl;
    }
};

int main()
{
    Student s1(41, "Onkar_Bagade", "SOAl");
    Student s2(27, "Soham_Shende", "SOES");
    Student s3(56, "Raj_Savant", "SOC");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

