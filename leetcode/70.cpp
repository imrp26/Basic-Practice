class Solution 
{
public:
    int climbStairs(int n) 
    {
        int i,dp[n+1];
        dp[0]=dp[1]=1;
        for(i=2;i<=n;i++)
            dp[i]=dp[i-2]+dp[i-1];
        return dp[n];
    }
};
