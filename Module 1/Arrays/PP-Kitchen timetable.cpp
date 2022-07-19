//https://www.codechef.com/problems/KTTABLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int c[n];
		int count=0;
		int r=1;
		for(int i=0;i<n;i++)
		{
		   cin>>a[i];
		   if(i==0)
		   {
		   	c[0]=a[0];
		   }
		   else
		   {
		   	c[r]=abs(a[i]-a[i-1]);
		   	r++;
		   }
	}
		
		for(int i=0;i<n;i++)
		{
		cin>>b[i];
		if(b[i]<= c[i])
		count++;
	}
		

	
	cout<<count<<endl;
		
	}
}
