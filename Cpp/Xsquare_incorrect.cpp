#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int num;
	cin >> num;    
	while(num--)
	{
		int t,count=1;
		string str;
		cin>>str;
       t=str.size();
	   if(t%2==0)
	   {
	   for(int i=0;i<t/2;i++)
	   {
		   if(str[i]!=str[(t/2)+i])
		   {
		   count=0;
		   break;
		   }
	   }   
	   }
	   if(t%2!=0)
	   {
		   count=0;
		 for(int i=0;i<t/2;i++)
		 {
			 if(str[i]==str[(t/2)+i+1])
			 {
				 count=1;
			 }
		 }  
	   }
	   if(count==1)
	   cout<<"Yes"<<endl;
	   if(count==0)
	   cout<<"No"<<endl;
	  
	}
	return 0;
}