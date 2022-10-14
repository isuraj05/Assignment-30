#include<iostream>
using namespace std;

int main()
{
    long long int pin;
    int count=0;
    cout<<"Enter an area pincode: ";
    cin>>pin;
    try
    {
        while (pin!=0)
        {
            count++;
            pin=pin/10;
        }
        if(count!=6)
            throw "You have entered an Invalid pincode";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    if(count==6)
        cout<<"Valid Pincode";
    return 0;
}