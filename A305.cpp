#include<iostream>
using namespace std;

int main()
{
    long long int digit;
    int count=0;
    cout<<"Enter an mobile number: ";
    cin>>digit;
    try
    {
        while (digit!=0)
        {
            count++;
            digit=digit/10;
        }
        if(count!=10)
            throw "You have entered an Invalid Number";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    if(count==10)
        cout<<"Valid Number";
    return 0;
}