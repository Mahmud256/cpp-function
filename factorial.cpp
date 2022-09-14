#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1, i;
    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    result = factorial(num);

    cout<<"Factorial is: "<<result<<endl;

    return 0;
}
