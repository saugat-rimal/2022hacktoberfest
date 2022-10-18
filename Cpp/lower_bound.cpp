#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int *ptr=lower_bound(a,a+n,5);   //for sets and maps ,declare as auto it=s.lower_bound(num);
    cout<<*ptr<<endl;
}