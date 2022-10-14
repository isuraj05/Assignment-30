#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op,choice;
    try
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;

        cout<<"\nEnter an operator: ";
        cin.ignore();
        cin>>op;
        if(op!='+' && op!='-' && op!='*' && op!='/' && op!='%')
            throw "\n\nError... Bad Operator, operation cannot be performed";

        if(op=='/' && b==0)
            throw "\n\nError... Denominator should not be zero";
        choice=op;
        switch(choice)
        {
            case '+':
                cout<<"\nResult ... "<<a<<"+"<<b<<"="<<a+b;
                break;
            case '-':
                cout<<"\nResult ... "<<a<<"-"<<b<<"="<<a-b;
                break;
            case '*':
                cout<<"\nResult ... "<<a<<"*"<<b<<"="<<a*b;
                break;
            case '/':
                cout<<"\nResult ... "<<a<<"/"<<b<<"="<<a/b;
                break;
            case '%':
                cout<<"\nResult ... "<<a<<"%"<<b<<"="<<a%b;
        }
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}