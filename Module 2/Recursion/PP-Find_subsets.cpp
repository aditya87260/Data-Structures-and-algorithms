//https://leetcode.com/problems/subsets/submissions/
class Solution {
public:
     vector<vector<int>> ans;
    void ansq(vector<int>nums,int n,int in,int sz,int temp[])
    {
         if(in==n)
         {   vector<int>tq;
             for(int i=0;i<sz;i++)
         {
             tq.push_back(temp[i]);
         }
             ans.push_back(tq);
             return;
         }
         temp[sz]=nums[in];
         ansq(nums,n,in+1,sz+1,temp);
         ansq(nums,n,in+1,sz,temp);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int temp[n];
        ansq(nums,n,0,0,temp);
        return ans;
        
    }
};