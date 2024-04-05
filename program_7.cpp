#include <iostream>
using namespace std;

class arr_addition
{
    public:
    int arr[5]; // Declare array
    int sum = 0;
    int size;

    arr_addition()
    {
        // Initialize array elements
        arr[0] = 2;
        arr[1] = 4;
        arr[2] = 6;
        arr[3] = 8;
        arr[4] = 10;

        size = sizeof(arr) / sizeof(arr[0]);
    }
};

int main()
{
    arr_addition obj;
    for (int i = 0; i < obj.size; ++i)
    {
        obj.sum += obj.arr[i];
    }

    cout << "Sum of array elements: " << obj.sum << endl;

    return 0;
}

/* Output:
    Sum of array elements: 30
*/