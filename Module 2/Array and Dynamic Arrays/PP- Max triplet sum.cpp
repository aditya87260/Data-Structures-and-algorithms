#include<bits/stdc++.h>
using namespace std;
void suffix(int arr[],int n,int suf[])
{ 
	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1)
		suf[i]=arr[i];
		
		else
		{
			suf[i]=max(suf[i+1],arr[i]);
		}
	}

}
void prefix(int arr[],int n,int pre[])
{ 
	for(int i=0;i<n;i++)
	{
		if(i==0)
		pre[i]=arr[i];
		
		else
		{
			pre[i]=max(pre[i-1],arr[i]);
		}
	}

}
int main()
{
	int arr[8]={2,3,-1,4,6,-3,7,-5};
	int suf[8];
	int pre[8];
	int n=8;
	suffix(arr,8,suf);
	prefix(arr,8,pre);
		int maxi=INT_MIN;
		int i;
		for(i=1;i<n-1;i++)
		{
			maxi=max((pre[i-1]+arr[i]+suf[i+1]),maxi);
		}
		cout<<i<<" ";
		cout<<maxi;

	
	
}
