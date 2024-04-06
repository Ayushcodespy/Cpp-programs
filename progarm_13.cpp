#include <iostream>
#include <memory> // for unique_ptr
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "MyClass constructor called" << endl;
    }

    ~MyClass() {
        cout << "MyClass destructor called" << endl;
    }

    void display() {
        cout << "Hello from MyClass" << endl;
    }
};

int main() {
  
    unique_ptr<MyClass> ptr(new MyClass);

    ptr->display();

    return 0;
}
