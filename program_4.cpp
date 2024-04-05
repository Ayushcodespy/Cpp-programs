/* Writie a C++ program which contains a class name subject inside this class two member
function one is sub_name() and another is sub_code().. You have two subjects C++ and DSA
and their respective codes are C++01 and DS01 print the name of subject in one function
and code is another function. */

#include<iostream>
using namespace std;

class subject
{
    public:
    void sub_name()
    {
        cout<<"Subjects :"<<endl<<"C++"<<endl<<"DSA"<<endl;
    }

    void sub_code()
    {
        cout<<"Subject_Code :"<<endl<<"C++01"<<endl<<"Ds01";
    }
};

int main()
{
    subject obj;
    obj.sub_name();
    obj.sub_code();
    return 0;
}


/*Output:
    Subjects :
    C++
    DSA
    Subject_Code :
    C++01
    Ds01 
*/