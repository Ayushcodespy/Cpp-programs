/* Create a class cube which have a data member side and a function which only print the value of side which has assigned in the in the pointer variable or pointer to class member */

#include<iostream>
using namespace std;

class cube
{
    public:
    int side;
    void show()
    {
        cout<<"side="<<side;
    }
};

int main()
{
    cube obj,*obj1;
    obj1=&obj;
    int cube :: *ptr = &cube:: side;
    obj1->*ptr=20;
    obj1->show();
    return 0;
}


/*OUTPUT 

side=20*/