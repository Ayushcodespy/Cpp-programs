#include<iostream>
#include<memory.h>
using namespace std;

int main()
{
    unique_ptr<int> ptr(new int);
    
    cout<<ptr<<*ptr;
    return 0;
}