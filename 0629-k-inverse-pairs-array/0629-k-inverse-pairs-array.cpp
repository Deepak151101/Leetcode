class Solution {
public:
    const int mod = 1e9 + 7;
    vector<vector<int>> dp;
    int solve(int n,int k)
    {
        if(k == 0) return 1;
        if(n == 0) return 0;

        if(~dp[n][k]) return dp[n][k];

        long long w = 0;
        for(int i = 0; i <= min(n-1,k); i++)
        {
            w += (solve(n-1,k-i) % mod);
        }

        return dp[n][k] = w % mod;
    }
    int kInversePairs(int n, int k) {
        dp = vector(n+1,vector<int> (k+1,-1));
        return solve(n,k);
    }
};