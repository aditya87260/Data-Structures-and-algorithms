//https://leetcode.com/problems/trapping-rain-water/
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
		int water=0;
		
		for(int i=1;i<n-1;i++)
		{  int l=pre[i-1];  //max height in left of current pillar
		   int r=suf[i+1];  // max height in right of current pillar
		   int h=min(l,r); 
		   if(h<=arr[i])  //in left or right or both side there is no pillar of height greater than current pillar so this pillar will not store any water
		   continue;
		   else
            water+=h-arr[i];  //height of lower pillar in left or right - current pillar height will be water stored in current pillar
		}
	
		cout<<water;

	
	
}
