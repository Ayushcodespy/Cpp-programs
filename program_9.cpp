/* C++ program  to convert the temperature from celsius into fehrenheit */

#include <iostream>
using namespace std;

class temp
{
    public:
    void temp_fahr(double temp){
        double f;
        f = (temp * 9.0/5.0) + 32;
        cout << "Temperature in Fahrenheit is: " << f;
    }
};
int main() {
    double celsius, fahrenheit;

    temp obj;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    obj.temp_fahr(celsius);


    return 0;
}
