#include <bits/stdc++.h> 
#define ll long long
using namespace std;
ll mod=1000000007;

int main() 
{
   
    set<int>st{1,2,3,4,5};
    st.erase(st.begin(),st.begin()+2);
    for(auto it=st.begin();it!=st.end();it++)
    cout<<*it;
    
}

