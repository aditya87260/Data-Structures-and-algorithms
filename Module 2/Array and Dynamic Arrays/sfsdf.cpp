#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
  ll t;
  cin>>t;
  while(t--)
  {




ll n;
cin>>n;
string a,b;
cin>>a>>b;
size_t found=a.find('1');
if(n==2&&a=="00"&&b=="11")
{
    cout<<"NO"<<endl;
}
else
{
    bool hi=false;
    for(int i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
        {
            hi=true;
            break;
        }
    }
    if(hi)
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(found==string::npos)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    else
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}
  }
  return 0;
}
