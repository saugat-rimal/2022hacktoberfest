#include<bits/stdc++.h>
using namespace std;

void DNFsort(int a[],int n){
    int l=0,h=n-1,m=0;
    while(m<=h){
        if(a[m]==0){
            swap(a[m],a[l]);
            l++;
            m++;
        }
        else if(a[m]==2){
            swap(a[m],a[h]);
            h--;
        }
        else m++;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    DNFsort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}