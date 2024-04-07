/* program to add multiple numbers entered by user */

#include <iostream>
using namespace std;

class AddNumbers {
public:
    double sum;

    AddNumbers() {
        sum = 0;
    }

    double add(double num) {
        sum += num;
        return sum;
    }
};

int main() {
    int choice = 1;
    int n;
    double total = 0;
    AddNumbers obj;

    while (choice == 1) {
        cout << "Enter a number: ";
        cin >> n;
        total = obj.add(n);
        cout << "Press 1 if you want to add more: ";
        cin >> choice;
    }
    
    cout << "Total = " << total << endl;
    return 0;
}
