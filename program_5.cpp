/* Create a simple program without class which allocates memory for the int value and 
release or perform automatically memory management using unique_ptr
*/

#include <iostream>
#include <memory>
using namespace std;

int main() {
    
    unique_ptr<int> ptr(new int);

    if (ptr != nullptr) {
        
        *ptr = 42;
        cout << "Value allocated: " << *ptr <<endl;
    } else {
        cerr << "Memory allocation failed!" <<endl;
        return 1; 
    }

    return 0;
}
