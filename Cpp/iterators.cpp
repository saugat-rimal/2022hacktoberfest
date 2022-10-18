#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={2,3,5,6,7};
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  cout<<endl;
  vector<int> :: iterator it =v.begin();
  for(it=v.begin();it!=v.end();it++)
  cout<<*it<<" ";
  cout<<endl;
  //Another method
  for(int value: v)
  cout<<value<<" ";
  cout<<endl;
} //in case of vector of pairs (*it).first <=> it->first