#include<iostream>
#include<string>
using namespace std;
string erase(string str1,string str2)
{
  string answer;
  for(int i=0;i<str1.size();i++)
  {
    int flag=0;
	for(int j=0;j<str2.size();j++)
	{
		if(str1[i]==str2[j])
		{
			flag=1;
		}
	}
	if(flag!=1)
	{
		answer.push_back(str1[i]);
	}
  }
  return answer;
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
    cout<<erase(str1,str2)<<endl;	
}