/* write a program in c++ to demonstrate constructor call in the derived class*/

#include<iostream>
using namespace std;
class class_1 {
    int a;
    public:
    class_1(int x)
    {
        a = x;
        cout<<"\n a = "<<a;
    }
};

class class_2 : public class_1
{
    public:
    class_2(int y, int z) : class_1(y)
    {
        cout<<"\n y = "<< y <<"\n z = "<<z;
    }
};

int main() {
    class_2 obj(24, 56);

    return 0;
}
