#include<bits/stdc++.h>
using namespace std;
void answer()
{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=2;i<=n;i++)
		{
				if(a[i]%a[1]!=0)
				{
				cout<<"NO"<<endl;
				  return;
			}
			
		}
	
		cout<<"YES"<<endl;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{  
	   answer();
	}

}

