/*dangling pointer*/

#include<iostream>
using namespace std;

int main()
{
    int *ptr=new int;
    cout<<ptr<<endl;
    delete ptr;
    cout<<ptr<<endl;
    ptr=nullptr;
    cout<<ptr;
    return 0;
}