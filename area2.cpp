#include <iostream>
#include <cmath>
#define pi 3.14159265359
using namespace std;
double triangle(float height, float weight)
{
    float area=0;
    area = height*weight*1/2;

    return area;
}

double circle(float radius)
{
    float area=0;
    area = pi*pow(radius,2);

    return area;
}

double rectangle(float height, float weight)
{
    float area=0;
    area = height*weight;

    return area;
}
int main()
{
    double r,h,w,Triangle,Circle,Rectangle;

    cout<<"Enter Radius Value:";
    cin>>r;

    cout<<"Enter Height Value:";
    cin>>h;

    cout<<"Enter Weight Value:";
    cin>>w;

    Triangle = triangle(h,w);
    cout<<"Triangle Area is: "<<Triangle<<endl;

    Circle = circle(5);
    cout<<"Circle Area is: "<<Circle<<endl;

    Rectangle = rectangle(h,w);
    cout<<"Rectangle Area is: "<<Rectangle<<endl;

    return 0;
}
