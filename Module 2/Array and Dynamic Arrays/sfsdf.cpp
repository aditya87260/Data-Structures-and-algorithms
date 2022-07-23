#include<bits/stdc++.h>
using namespace std;
void rearrange(int a[],int n)
{ for(int i=0;i<n;i++)
    {
	if(a[i]>=0)
    {
    	int ind=a[i];
    	int val=i;
    	while(ind!=i)
    	{
    	   int temp=a[ind];
		   a[ind]=-(val+1);
		   ind=temp;
		   val=ind;	
		}
		a[ind]=-(val+1);
	
	}}
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
