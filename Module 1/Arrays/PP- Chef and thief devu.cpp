//https://www.codechef.com/problems/COPS
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y;
		cin>>m>>x>>y;
		
		int d=x*y;
		vector<bool> ans(101,false);
		int count=0;
		while(m--)
		{
			int c;
			cin>>c;
			for(int i=c-d;i<=c+d;i++)
			{ if(i>=1 && i<=100)
			  {
			  //cout<<i<<endl;
			  ans[i]=true;
		}
		}
		}
		for(int i=1;i<=100;i++)
		{
			if(ans[i]==false)
			count++;
		}
		cout<<count<<endl;
		
		
	}
}
