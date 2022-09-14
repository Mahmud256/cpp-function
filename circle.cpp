#include <iostream>
#include <cmath>
#define pi 3.14159265359
using namespace std;
float area(float radius)
{
    float a=0;
    a = pi*pow(radius,2);

    return a;
}

int main()
{
    float r,result;

    cin>>r;

    result = area(r);

    cout<<"Area is: "<<result<<endl;

    return 0;
}
