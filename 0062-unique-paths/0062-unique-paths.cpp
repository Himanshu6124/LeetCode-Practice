class Solution {
    int solve(int m, int n,int dp[101][101])
    {
        if(m==0 && n==0) return 1 ;
        
        if(dp[m][n] != -1 ) return dp[m][n] ;
        
        int left = 0 ;
        int up = 0 ;
        if(n > 0)
             left = solve(m,n-1,dp) ;
        
        if(m > 0)
             up = solve(m-1, n,dp) ;
        
        return dp[m][n] = left + up ;
        
    }
    
public:
    int uniquePaths(int m, int n) 
    {
        int dp[101][101] ;
        memset(dp,-1,sizeof(dp)) ;
        
        return solve(m-1 ,n-1,dp) ;
        
    }
};