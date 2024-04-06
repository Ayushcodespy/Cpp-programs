/* C++ program that defines a class Student to represent student information */

#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name;
    int age;
    string id;

    public:
    Student(string n, int a, string i) {
        name = n;
        age = a;
        id = i;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student s1("John", 20, "S001");
    Student s2("Alice", 22, "S002");

    cout << "Student 1:\n";
    s1.displayInfo();
    cout << "\nStudent 2:\n";
    s2.displayInfo();

    return 0;
}
