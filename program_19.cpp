/* Write a C++ program to calculate the percentage obtained by student having
five subjects */

#include <iostream>
using namespace std;

class Percentage {
public:
    int total = 500;
    int math;
    int science;
    int ssc;
    int hindi;
    int english;

    void inputMarks() {
        cout << "\nEnter marks of the following subjects:\n";
        cout << "Maths: ";
        cin >> math;
        cout << "Science: ";
        cin >> science;
        cout << "Social Science: ";
        cin >> ssc;
        cout << "Hindi: ";
        cin >> hindi;
        cout << "English: ";
        cin >> english;
    }

    float percent() {
        float per;
        per = (math + science + ssc + hindi + english) * 100.0 / total;
        return per;
    }
};

int main() {
    Percentage obj;
    obj.inputMarks();
    cout << "Percentage you obtained: " << obj.percent() << " %";
    return 0;
}
