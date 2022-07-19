//https://codeforces.com/problemset/problem/855/B
#include<bits/stdc++.h>
using namespace std;
#define INF (long long)4e18
void suffix(long long arr[],long long n,long long suf[],long long r)
{ 
	for(long long i=n-1;i>=0;i--)
	{
		if(i==n-1)
		suf[i]=r*arr[i];
		
		else
		{
			suf[i]=max(suf[i+1],r*arr[i]);
		}
	}
 
}
void prefix(long long arr[],long long n,long long pre[],long long p)
{ 
	for(long long i=0;i<n;i++)
	{
		if(i==0)
		pre[i]=p*arr[i];
		
		else
		{
			pre[i]=max(pre[i-1],p*arr[i]);
		}
	}
 
}
int main()
{   long long n,p,q,r;
	cin>>n>>p>>q>>r;
	long long arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	long long pre[n];
	long long suf[n];
	suffix(arr,n,suf,r);
	prefix(arr,n,pre,p);
		long long maxi=-INF;
		for(long long i=0;i<n;i++)
		{
			maxi=max((pre[i]+q*arr[i]+suf[i]),maxi);
		}
	
		cout<<maxi;
 
 
}
