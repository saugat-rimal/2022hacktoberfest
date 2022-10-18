#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	     if(n<4)
	     cout<<"YES"<<endl;
	     if(n==4)
	     {
             int count=0;
	          if((s[0]!='a' &&s[0]!='e'&&s[0]!='i'&&s[0]!='o'&&s[0]!='u') && (s[0+1]!='a' &&s[0+1]!='e'&&s[0+1]!='i'&&s[0+1]!='o'&&s[0+1]!='u')&&(s[0+2]!='a' &&s[0+2]!='e'&&s[0+2]!='i'&&s[0+2]!='o'&&s[0+2]!='u')&&(s[0+3]!='a' &&s[0+3]!='e'&&s[0+3]!='i'&&s[0+3]!='o'&&s[0+3]!='u'))
	        {
	            count=1;
	            
	        }
            cout<<count<<endl;
	        if(count==1)
            {
	          cout<<"NO"<<endl;

            }
	    else
        {

	      cout<<"YES"<<endl;
        }
	     }
          else{
             int count=0;
	   
	    for(int i=0;i<n-4;i++)
	    {
	        if((s[i]!='a' &&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u') && (s[i+1]!='a' &&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')&&(s[i+2]!='a' &&s[i+2]!='e'&&s[i+2]!='i'&&s[i+2]!='o'&&s[i+2]!='u')&&(s[i+3]!='a' &&s[i+3]!='e'&&s[i+3]!='i'&&s[i+3]!='o'&&s[i+3]!='u'))
	        {
	            count=1;
	            break;
	        }
	    }
	    if(count==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	     }
	    
	}
	return 0;
}

	     
	    