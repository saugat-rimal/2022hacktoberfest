#include<bits/stdc++.h>
using namespace std;
int printVec(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main()
{
    int N;
    cin>>N;

   vector<int> v[N];
   for(int i=0;i<N;i++)
   {
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
       int x;cin>>x;
       v[i].push_back(x);
    }
    printVec(v[i]);
   }

}