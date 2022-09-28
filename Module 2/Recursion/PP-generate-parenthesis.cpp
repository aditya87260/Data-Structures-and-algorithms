//https://leetcode.com/problems/generate-parentheses/submissions/
class Solution {
public:
    vector<string> ans;
    void helper(int l,int r,string s,int n)
    {
        if(s.length()==2*n)
        {
            ans.push_back(s);
            return;
        }
        if(l==r)
        {
            s+='(';
            helper(l+1,r,s,n);
        }
        else if (l>r)
        {
            if(l==n)
            {s+=')';
                helper(l,r+1,s,n);
            }
            else
            {
               s+='(';
                helper(l+1,r,s,n);
                s.pop_back();
                s+=')';
                helper(l,r+1,s,n);
            }
            
        }
    }
    vector<string> generateParenthesis(int n) {
        int l=0;
        int r=0;
        string s="";
        helper(l,r,s,n);
        return ans;
        
    }
};