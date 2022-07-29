//https://practice.geeksforgeeks.org/problems/number-of-paths0926/1

long long ans(int i,int j,int m,int n)
{
    if(i==m-1 || j==n-1)
    return 1;
    
    return ans(i,j+1,m,n) + ans(i+1,j,m,n);
}
long long  numberOfPaths(int m, int n)
{
    // Code Here
    return ans(0,0,m,n);
}