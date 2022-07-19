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
int main()
{
	int arr[8]={2,3,-1,4,6,-3,7,-5};
	int a;
	int suf[8];
	cin>>a;
	suffix(arr,8,suf);
		for(int i=0;i<8;i++)
     	cout<<suf[i]<<" ";
 cout<<endl;
	cout<<"Query max:"<<suf[a];

	
	
}
