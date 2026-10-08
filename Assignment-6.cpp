#include <iostream>
using namespace std;

class Employee {
private:
   string name;
   int id;

public:
  Employee(string n, int i) {
     name = n;
     id = i;
     cout << "CONSTRUCTOR IS CALLED" << endl;
  }

  void display() {
    cout << "Name of the Employee: " << name << endl;
    cout << "Employee ID: " << id << endl;
  }

 ~Employee() {
      cout <<"DESTRUCOR IS CALLED" << endl;
  }
};

int main() {
  Employee e1("Arman", 29);
  e1.display();
  return 0;
}

  
