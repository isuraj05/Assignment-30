#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i, digit=0, chr=0, splchr=0, acpt=0;
    char str[10];
    cout<<"Enter a username: ";
    cin.getline(str,10);
    try
    {
        if(strlen(str) > 7)
            throw "\n\nInvalid Username. Contains more than six characters";
        else
        {
            for(i=0;str[i];i++)
            {
                if(str[i]==' ')
                    throw "\n\nInvalid username. Contains space";
                if(isdigit(str[i]))
                    digit=1;
                if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
                    chr=1;
                else
                    splchr=1;
            }
        }
        if(digit==0 && splchr==0)
             throw "\n\nInvalid Username. Digit and special character Not Found";
        else if(digit==0)
             throw "\n\nInvalid Username. Digit not found";
        else if(splchr==0)
            throw "\n\nInvalid Username. Special Character Not found";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
        acpt=1;
    }

    if(acpt==0)
        cout<<endl<<"Username Accepted";
    return 0;
}