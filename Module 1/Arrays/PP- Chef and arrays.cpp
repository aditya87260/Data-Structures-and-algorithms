//https://www.codechef.com/problems/NUTLOOP
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
		int r=0;
		for(int i=0;i<n;i++)
		{
		   cin>>a[i];
		   
			   }
		
		for(int i=0;i<n;i++)
		{
		cin>>b[i];
	}
		
		for(int i=0;i<n;i++)
		{  int d=a[i];
		   int p=d*10+b[i];
		   
		    int e=b[i];
		   int q=e*10+a[i];
		   
		   if(p>=q)
		   cout<<p<<" ";
		   else
		   cout<<q<<" ";
		   
		   
	}
		

	
	cout<<endl;
		
	}
}
