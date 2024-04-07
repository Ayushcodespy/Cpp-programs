#include <iostream>
using namespace std;

class Swapper {
    private:
    int num1;
    int num2;
    public:
    Swapper(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void swapNumbers() {
        int temp = num1;
        num1 = num2;
        num2 = temp;

        cout << "After swapping: " << endl;
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    Swapper obj(num1, num2);

    cout << "Before swapping: " << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    obj.swapNumbers();

    return 0;
}
