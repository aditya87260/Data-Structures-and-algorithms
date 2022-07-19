//https://www.codechef.com/problems/FRGTNLNG
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<string>dict;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			dict.push_back(s);
		}
		set<string> ans;
		
		for(int i=0;i<k;i++)
		{  int a;
		  cin>>a;
		  for(int j=0;j<a;j++)
		  {
		   string r;
		  cin>>r;
		  ans.insert(r);
	}
	
		}
		
		for(int i=0;i<dict.size();i++)
		{
			string temp=dict[i];
			if(ans.find(temp) != ans.end())
			cout<<"YES"<<" ";
			else
			cout<<"NO"<<" ";
		}
		cout<<endl;
	}
	
}
