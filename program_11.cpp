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
    
    Rectangle myRectangle;

    // Set length and width
    myRectangle.setLength(5.0);
    myRectangle.setWidth(3.0);

    // Calculate and print the area
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    return 0;
}
