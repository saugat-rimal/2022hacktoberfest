#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n,a[33][33],flag,count;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n/2;j++)
			{
				if(a[i][j]==a[i][n-j])
				{
					flag=1;
				}
				if(a[i][j]!=a[i][n-j])
				{
					flag=0;
					break;
				}
			}
		}
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n/2;i++)
			{
              if(a[i][j]==a[n-i][j])
			  {
				  count=1;
			  }
			  if(a[i][j]!=a[n-i][j])
			  {
                 count =0;
				 break;
			  }
			}
		}
        cout<<count<<" "<<flag<<endl;
		if(count==1 && flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}