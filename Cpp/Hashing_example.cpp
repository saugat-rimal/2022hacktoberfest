#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];
int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    return 0;

    
}