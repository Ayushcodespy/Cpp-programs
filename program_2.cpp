/* Create a class simple which contains a function having three arguments principal, rate and time this function must calculate the simple interest and print the value binding should be compile time*/
#include <iostream>
using namespace std;
class simple
{
public:
    void simple_interest(float p, float r, float t)
    {
        float si = p * r * t / 100;
        cout << "Simple interest for "<<t<<" years is " << si;
    }
};

int main()
{
    simple *obj = new simple();
    obj->simple_interest(1000, 10, 6);
    return 0;
}