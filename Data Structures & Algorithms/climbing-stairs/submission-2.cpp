class Solution {
public:

int recursiveclimb(int n,vector<int> &dp){
    if(n<=1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=recursiveclimb(n-1,dp)+recursiveclimb(n-2,dp);
    return dp[n];
}


    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return recursiveclimb(n,dp);
    }
};
