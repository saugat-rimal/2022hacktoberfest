#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='G')
        {
            cout<<"G";
            
        }
       else if(str[i]=='(' && str[i+1]==')')
        {
            cout<<"o";
            i++;
            
        }
        else
        {
            cout<<"al";
            i+=3;
        }
    }
    return 0;
}