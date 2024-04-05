/* Create a class calculator contains two function area and vovume defines outside the class having two arguments apply late binding for parameters */

#include<iostream>
using namespace std;

class calculator
{
    public:
    void area_rectangle(float length, float width);
    void volume_cylinder(float radius, float height);
};

void calculator :: area_rectangle(float length, float width){
    cout<<"Area of Rectangle = "<<length*width;
}

void calculator :: volume_cylinder(float radius, float height){
    cout<<"Volume of cylinder = "<<3.14*radius*radius*height;
}

int main()
{
    float length, width, radius, height;
    calculator obj;
    cout<<"Enter length of rectangle : ";
    cin>>length;
    cout<<"Enter breadth of rectangle : ";
    cin>>width;
    obj.area_rectangle(length, width);
    cout<<endl<<"Enter radius of cylinder : ";
    cin>>radius;
    cout<<"Enter height of cylinder : ";
    cin>>height;
    obj.volume_cylinder(radius, height);
    return 0;
}