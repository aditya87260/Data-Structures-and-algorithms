#include<bits/stdc++.h>
using namespace std;
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
	int a;
	int pre[8];
	cin>>a;
	prefix(arr,8,pre);
		for(int i=0;i<8;i++)
     	cout<<pre[i]<<" ";
 cout<<endl;
	cout<<"Query max:"<<pre[a];

	
	
}
