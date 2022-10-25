#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;      //Keys are stored in sorted order
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});                     //another way
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
    /* or another way to print 
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    */
   it=m.find(3); 
   if(it==m.end())
   cout<<"NO VALUE";
   else
   cout<<it->first<<" "<<it->second;
   m.erase(3);
   // m.clear();    erases the whole map.
}