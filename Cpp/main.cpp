#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[1000][1000],flag;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int length=min(n,m);
    int sum_rows=0,sum_column=0;
    for(int i=0;i<length;i++)
    {
        
        for(int j=0;j<length;j++)
        {
           sum_rows+=a[i][j];
           sum_column+=a[j][i];
           
        }
        if(sum_rows!=sum_column)
        {
            int flag=0;
            
        }
        if(sum_rows==sum_column)
        {
            int flag=1;
        }
    }
    cout << flag << endl ;
}