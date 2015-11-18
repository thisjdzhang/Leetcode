class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        
        for (int i=1;i<=n;i++){
            for (int j=i-1;j>=0;j--){
                dp[i] += dp[j]*dp[i-1-j];
            }
        }
        
        return dp[n];
    }
};
