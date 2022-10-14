#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,j, flag=0, count, acpt=0;
    char email[100], gmail[20];
    cout<<"\nEnter an email address: ";
    cin.getline(email,100);
    try
    {
        for(j=0,i=0;email[i];i++)
        {
            if(email[i]=='@')
                flag=1;

            if(flag==1)
            {
                gmail[j]=email[i];
                j++;
            }
        }
        gmail[j]='\0';
        count=strcmp(gmail,"@gmail.com");
        if(count==0)
            acpt=1;
        else
            throw "\nInvalid email address";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    if(acpt==1)
        cout<<"\nEmail ID accepted";
    return 0;
}