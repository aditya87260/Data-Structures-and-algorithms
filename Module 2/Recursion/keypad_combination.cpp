class Solution {
public:
vector<string> an;

int keypad(string s[],int n)
{
	if(n==0 || n==1)
	{   s[0]="";
		return 1;
	}
	int smallno=n/10;
	int smallout=keypad(s,smallno);
	int remain=n%10;
	string last=an[remain];
	int k=0;
	string m[258];
	for(int i=0;i<smallout;i++)
	{
		m[i]=s[i];
	}
	for(int i=0;i<last.size();i++)
	{
	for(int j=0;j<smallout;j++)
	{
		s[k]=m[j]+last[i];
		k++;
	
	}
	
}
return k;
}

    vector<string> letterCombinations(string digits) {
   an.push_back(" ");
    an.push_back("");
    an.push_back("abc");
    an.push_back("def");
    an.push_back("ghi");
    an.push_back("jkl");
    an.push_back("mno");
    an.push_back("pqrs");
    an.push_back("tuv");
    an.push_back("wxyz");
          vector<string>v; 
       if(digits=="" || digits==" ")
       {
           
           return v;
       }
    int n=stoi(digits);
    
	string a[258];
	int out=keypad(a,n);
     
        
    for (int i = 0; i < out; i++)
        v.push_back(a[i]);
        return v;
        
    }
};