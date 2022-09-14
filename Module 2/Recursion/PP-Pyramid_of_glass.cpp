#include<bits/stdc++.h>
using namespace std;
double wi[15][15];
void cou(int i,int j,int &n,double &t,int &ans)
{
    if(i==n+1)
    return;
    
    if(wi[i][j]>=1.0)
    {
        ans++;
        wi[i+1][j]+=(wi[i][j]-1.0)/2.0;
        wi[i+1][j+1]+=(wi[i][j]-1.0)/2.0;
    }
    
    if(j==i)
    cou(i+1,1,n,t,ans);
    else
    cou(i,j+1,n,t,ans);
}

int main()
{
    int n;
    double t;
    cin>>n>>t;
    wi[1][1]=t;
    int i=1,j=1,ans=0;
    cou(i,j,n,t,ans);
    cout<<ans<<endl;
    
}