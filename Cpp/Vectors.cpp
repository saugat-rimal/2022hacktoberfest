#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    v.push_back(2);
    cout<<endl;
}
int main()
{
    vector<int> v; //Size is dynamic
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
}