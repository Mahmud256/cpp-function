#include <iostream>
#include <cmath>
#define pi 3.14159265359
using namespace std;
float circle(float radius)
{
    float a=0;
    a = pi*pow(radius,2);
    cout<<"Circle is: "<<a<<endl;
}

float square(float r)
{
    cout<<"Square is: "<<pow(r,2)<<endl;
}

float rectangle(float length, float weight)
{
    cout<<"Rectangle is: "<<length*weight<<endl;
}

int main()
{
    float r=2,l=3,w=4,n;

    cout<<"If press 1 show circle value press 2 show square value press 3 show rectangle value"<<endl;

    for(int i=0; i<3; i++)
    {
        cin>>n;
        if(n==1)
    {
        circle(r);
    }

    if(n==2)
    {
        square(r);
    }

    if(n==3)
    {
     rectangle(l,w);
    }
    }


    return 0;
}
