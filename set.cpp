#include<bits/stdc++.h>
using namespace std;
void print (set<string> &s)
{
  for(auto it=s.begin();it!=s.end();it++)
  cout<<*it<<endl;
}
int main()
{
   set<string> s;    //they are also sorted
   s.insert("abc");
   s.insert("zsdf");
   s.insert("bcd");
   auto it=s.find("abc") ;
   if(it!=s.end())
   cout<<*it;
   print(s);
   // to erase = s.erase(it);
}