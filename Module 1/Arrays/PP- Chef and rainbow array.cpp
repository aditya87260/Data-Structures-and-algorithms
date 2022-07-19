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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		
		}
		bool ans=true;
		int j=n-1;
	   int i=0;
	   int k=0;
	   while(k<=j)
	   {
	   	if(a[k]!=a[j])
	   	{
	   		ans=false;
	   		break;
		   }
		   k++;
		   j--;
	   }
		   while(a[i]<7)
		 {
		 if(a[i+1]-a[i]==1 || a[i+1]-a[i]==0)
		   {
		    i++;
			continue;
			}	
			else
			{
				ans=false;
				break;
			}
		}
		
		while(i!=n-1)
		 {
		     if((a[i]-a[i+1]==1 || a[i]-a[i+1]==0) && a[i]<=7)
		  {  i++;
		    continue;

		  }
		  
		 else
		 {
		 	ans=false;
		 	break;
		 }
		 
	}
	if(ans==true && n>=7 && a[0]==1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
}
