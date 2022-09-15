//https://leetcode.com/problems/powx-n/submissions/
class Solution {
public:
    double helper(double &x,int n)
    {
       if(n==0)
           return 1;
    
        double t=helper(x,n/2);
        if(n%2==0)
        {if(n<0)
            return 1/1.0*t*t;  //if n is negative return 1/ans
            return 1.0*t*t;
        }
        else
        {if(n<0)
            return 1/1.0*t*t*(1/x);
            return 1.0*t*t*x;
        }
    }
    double myPow(double x, int n) {
        return helper(x,n);
    }
};