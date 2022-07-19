#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1="bccadebcasd";
	string s2="deb";
	bool ans=false;
	
	for(int i=0;i<=s1.size()-s2.size();i++)
	{
		int n=s2.size();
		int j=i;
		string temp="";
		while(n>0)
		{
			temp+=s1[j];
			j++;
			n--;
		}
		cout<<temp<<endl;
		if(temp==s2)
		{
			ans=true;
			break;
		}
		temp="";
	}
	if(ans==true)
	cout<<"matched";
	else
	cout<<"not matched";
}
