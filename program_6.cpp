/* create a class simple have a simple function show() and create a pointer variable
   inside the temp() simply print that variable after declaration */

#include<iostream>
using namespace std;

class simple
{
    public:
    void show()
    {
        cout<<"Inside the show function"<<endl;
    }
};

void temp()
{
    int *pointer_variable = new int(10);
    cout<<"Pointer variable : "<<pointer_variable<<endl;
    delete  pointer_variable;
}

int main()
{
    simple obj;
    obj.show();
    temp();
    return 0;
}

/* Output:
        Inside the show function
        Pointer variable : 0xf77fb0
*/