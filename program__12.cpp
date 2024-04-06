/* Write a program to print the table of the given number */

#include <iostream>
using namespace std;

class Table {
    public:

    void generateTable(int number) {
        cout << "Table of " << number << ":\n";
        for (int i = 1; i <= 10; ++i) {
            cout << number << " x " << i << " = " << number * i << endl;
        }
    }
};

int main() {
    Table tb;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    tb.generateTable(num);

    return 0;
}
