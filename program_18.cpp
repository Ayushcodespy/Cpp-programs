/* C++ program to calculate the area of the rectangle using class and object*/

#include <iostream>

using namespace std;

class Rectangle {
public:
    float length;
    float width;

    void inputDimensions() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    float calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle obj;

    obj.inputDimensions();

    cout << "Area of rectangle is " << obj.calculateArea()<<endl;

    return 0;
}
