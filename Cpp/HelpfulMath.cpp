#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.length()==1)
    cout<<s<<endl;
    else
    {
        vector<int>se;
        for(int i=0;i<s.length();i+=2)
        {
            int k=(int)s[i]-48;
            se.push_back(k);
        }
        sort(se.begin(),se.end());
        for(auto it=se.begin();it!=(--se.end());it++)
        {
            cout<<(*it)<<"+";
            
        }
        auto it=--se.end();
        cout<<(*it);
    }
   return 0;
}