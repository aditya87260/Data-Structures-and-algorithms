#include<bits/stdc++.h>
using namespace std;
int main()
{
ifstream ob1("aditya.txt");
ofstream ob2("copy.txt");
string ans;
char ch;
if(!ob1 && !ob2)
{
cout<<"File not opened\n";
exit(0);
}
else
{
while(getline(ob1,ans))
{
for(int i=0;i<ans.length();i++)
ans[i]=tolower(ans[i]);
ob2<<ans<<endl;
}
ob1.close();
ob2.close();
}
}
