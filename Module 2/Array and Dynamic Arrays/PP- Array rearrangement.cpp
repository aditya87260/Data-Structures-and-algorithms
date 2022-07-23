//https://www.geeksforgeeks.org/rearrange-array-arrj-becomes-arri-j/

#include<bits/stdc++.h>
using namespace std;
void rearrange(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			int ind=a[i];
			int val=i;
			while(ind!=i)
			{
				int temp=a[ind];
				a[ind]=-(val+1);
				val=ind;
				ind=temp;
			}
			a[ind]=-(val+1);
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i]=(-1*a[i])-1;
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array after rearrangement:";
	rearrange(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

