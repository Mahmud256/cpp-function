#include<iostream>
using namespace std;
int reverse(int n)
{
    int rev=0,r;
    while(n!=0)
    {
        r = n%10;
        rev = rev*10+r;
        n = n/10;
    }
    return rev;
}
int main()
{
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    result = reverse(num);

    cout<<"Reverse is: "<<result<<endl;

    return 0;
}
