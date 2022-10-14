#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw "Denominator should not be zero";
        if(b<0)
            throw 0;
        c=a/b;
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    catch(int x)
    {
        cout<<x<<endl;
    }
    cout<<"Result "<<c<<endl;
    return 0;
}