#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[20];
    cout<<"Enter a nickname: ";
    cin.getline(str,20);
    try
    {
        if(strlen(str) > 8)
            throw "Invalid Nickname. Contains more than eight characters";
        else
        {
            int i;
            for(i=0;str[i];i++)
            {
                if( str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
                    continue;
                else
                    throw "Invalid Nickname. Contains space or digit or special character";
            }
            if(str[i]=='\0')
                throw "Valid Nickname";        
        }
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}