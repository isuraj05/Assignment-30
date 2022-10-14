#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i, digit=0, chr=0, splchr=0, cptchr=0, acpt=0;
    char str[20];
    cout<<"Enter a password: ";
    cin.getline(str,20);
    try
    {
        if(strlen(str) < 6)
            throw "\n\nInvalid Password. Contains less than six characters";
        else
        {
            for(i=0;str[i];i++)
            {
                if(str[i]==' ')
                    throw "\n\nInvalid password. Contains space";
                if(isdigit(str[i]))
                    digit=1;
                if(str[i]>='A' && str[i]<='Z')
                    cptchr=1;
                if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
                    chr=1;
                else
                    splchr=1;
            }
        }
        if(digit==0 && splchr==0 && cptchr==0)
             throw "\n\nInvalid Password. Digit, special character and capital letter Not Found";

        else if(digit==0 && splchr==0)
             throw "\n\nInvalid Password. Digit and special character Not Found";

        else if(digit==0 && cptchr==0)
             throw "\n\nInvalid Password. Digit and capital letter Not Found";

        else if(splchr==0 && cptchr==0)
             throw "\n\nInvalid Password. Special character and capital letter Not Found";
             
        else if(digit==0)
             throw "\n\nInvalid Password. Digit not found";

        else if(splchr==0)
            throw "\n\nInvalid Password. Special Character Not found";

        else if(cptchr==0)
            throw "\n\nInvalid Password. Capital letter Not found";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
        acpt=1;
    }

    if(acpt==0)
        cout<<endl<<"Password Accepted";
    return 0;
}