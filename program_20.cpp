/* C++ program that implements a unit converter from meter to feet and feet to meter
  using a class and object */

#include <iostream>
using namespace std;

class UnitConverter {
    private:
    double value;
    public:
    void setValue(double val) {
        value = val;
    }

    double metersToFeet() {
        return value * 3.281;
    }

    double feetToMeters() {
        return value / 3.281;
    }
};

int main() {
    double inputValue;

    UnitConverter converter;

    cout << "Enter the value to be converted: ";
    cin >> inputValue;

    converter.setValue(inputValue);
 
    cout << inputValue << " meters is equal to " << converter.metersToFeet() << " feet." << endl;
    
    cout << inputValue << " feet is equal to " << converter.feetToMeters() << " meters." << endl;
    
    return 0;
}
