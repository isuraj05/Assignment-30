#include<iostream>
using namespace std;

int main()
{
    int i, flag=0;
    char str[100];
    cout<<"Enter an email address: ";
    cin.getline(str,100);
    try
    {
        for(i=0;str[i];i++)
        {
            if(str[i]=='@')
                flag=1;
        }
        if(flag==0)
            throw "Invalid email address";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    if(flag==1)
        cout<<"Email ID accepted";
    return 0;
}