//https://www.codechef.com/problems/CNOTE
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int d=x-y;
		bool ans=false;
		
		for(int i=0;i<n;i++)
		{ int p,c;
		   cin>>p>>c;
		   if(p>=d && c<=k)
		   ans=true;
		   
			   }
		if(ans==true)
		cout<<"LuckyChef"<<endl;
		else
		cout<<"UnluckyChef"<<endl;
	
		
	}
}
