//https://codeforces.com/contest/727/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>ans;
bool answer(ll a,ll b)
{ 
    if(a>b)
    return false;

    if(a==b)
    {
       ans.push_back(a);
       return true;
    }
    

    if(answer(a*2,b) || answer(a*10+1,b))
    {
        ans.push_back(a);
        return true;
    }
    
    return false;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    bool ansi=answer(a,b);
    if(ansi==true)
    {    
        cout<<"YES"<<endl<<ans.size()<<endl;
     for(int i=ans.size()-1;i>=0;i--)
     cout<<ans[i]<<" ";
    }
    else
    cout<<"NO";
    
}