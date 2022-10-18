#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<char,int>&a,const pair<char,int>&b)
{
    if(a.second!=b.second)
    {
        return (a.second>b.second);
    }
    return (a.first<b.first);
    
}

int main()
{
string s;
cin>>s;
map<char,int>m;
for(int i=0;i<s.size();i++)
{
m[s[i]]++;
}
vector<pair<char,int>> v;
for(auto it=m.begin();it!=m.end();it++)
v.push_back(make_pair(it->first,it->second));
sort(v.begin(),v.end(),cmp);
auto it2=v.begin();
cout<<(*it2).first<<endl;

}