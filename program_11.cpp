/* Write a C++ program to calculate the area of the rectangle using class 'Rectangle' which
   have three member functions where seteLngth() and setWidth are used to set the lengthg 
   and width of the rectangle and calculateArea() is used to calculate and print the area
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Function to set length
    void setLength(double len) {
        length = len;
    }

    // Function to set width
    void setWidth(double wid) {
        width = wid;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {

    double l, b;

    Rectangle myRectangle;

    cout<<"Enter length of the rectangle :";
    cin>>l;
    // Set length and width
    myRectangle.setLength(l);

    cout<<"Enter width of the rectangle :";
    cin>>b;
    myRectangle.setWidth(b);

    // Calculate and print the area
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    return 0;
}
