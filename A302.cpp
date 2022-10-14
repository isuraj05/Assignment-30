#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw "Hello";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}