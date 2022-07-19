//https://codeforces.com/contest/740/problem/B
#include<bits/stdc++.h>
using namespace std;
void presum(int a[],int psum[],int n)
{  
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		psum[i]=a[i];
		else
		{
			psum[i]=psum[i-1]+a[i];
		}
	}
	   
	
}
// so find the sum of each subarray using prefix sum and for any subarray which has the sum negative then we will not include
//that sum else we will add that sum in our answer. So it means we are choosing those subarrays which has positive sum.
//Now choosing sum subarrays and then finding count that a particular number is included in how many subarrays and then finally adding the counts for all the numbers in choosen subarrays is 
// exactly same as firstly choosing the subbaray and finding the sum and adding only if it is positive
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int psum[n];
	int ans=0;
     for(int i=1;i<=n;i++)
	 cin>>a[i];
	 
	 presum(a,psum,n);
	 for(int i=0;i<m;i++)
	 {
	 	int a,b;
	 	cin>>a>>b;

	 	
	 	if(a==1)
	 	{
	 		if(psum[b]>=0)
	 		ans+=psum[b];
		 }
		 else
		 {
		 	int sum=psum[b]-psum[a-1];
		 	if(sum>=0)
		 	ans+=sum;
		 }
	 	
		 }
		 
		 
		cout<<ans;	
		 
}
