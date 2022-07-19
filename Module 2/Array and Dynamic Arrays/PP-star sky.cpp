//https://codeforces.com/problemset/problem/835/C

//Optimised approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,c;
    cin>>n>>q>>c;
    int a[105][105][11]={0};
    for(int i=0;i<n;i++)
    {
        int x,y,s;
        cin>>x>>y>>s;
        for(int j=0;j<(c+1);j++)
        {
            a[x][y][j]+=(s+j)%(c+1);
        }
    }
    
    
     for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			for(int k=0;k<11;k++)
			      {
			        if(j==1)
			        continue;
			        else
				a[i][j][k]=a[i][j][k]+a[i][j-1][k];s
			      }
		}
	}
	
	
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			for(int k=0;k<11;k++)
			      {
			      if(i==1)
			      continue;
			      else
				a[i][j][k]=a[i][j][k]+a[i-1][j][k];
			      }
		}
	}
    
    
    for(int i=0;i<q;i++)
    {  int sum=0;
        int t,x1,y1,x2,y2;
        cin>>t>>x1>>y1>>x2>>y2;
        t=t%(c+1);
        
        cout<<a[x2][y2][t]-a[x1-1][y2][t]-a[x2][y1-1][t]+a[x1-1][y1-1][t]<<endl;
    }
}


//Brute force approach
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,c;
    cin>>n>>q>>c;
    int a[105][105][11]={0};
    for(int i=0;i<n;i++)
    {
        int x,y,s;
        cin>>x>>y>>s;
        for(int j=0;j<11;j++)
        {
            a[x][y][j]+=(s+j)%(c+1);
        }
    }
    
    for(int i=0;i<q;i++)
    {  int sum=0;
        int t,x1,y1,x2,y2;
        cin>>t>>x1>>y1>>x2>>y2;
        t=t%(c+1);
        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
            sum+=a[i][j][t];
        }
        cout<<sum<<endl;
    }
}
*/
