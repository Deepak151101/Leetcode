class Solution {
public:
    int longestCommonSubsequence(const string& text1, const string& text2) {
   int m = text1.length();
   int n = text2.length();

   // Create a DP table to store LCS lengths
   vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

   // Build the DP table in a bottom-up manner
   for (int i = 1; i <= m; i++) {
       for (int j = 1; j <= n; j++) {
           if (text1[i - 1] == text2[j - 1]) {
               dp[i][j] = 1 + dp[i - 1][j - 1];
           } else {
               dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
           }
       }
   }

   // The LCS length is stored in the bottom-right corner of the DP table
   return dp[m][n];
}
};


