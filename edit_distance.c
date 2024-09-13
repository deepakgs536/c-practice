int min(int x, int y, int z) {
    if (x <= y && x <= z)
        return x;
    if (y <= x && y <= z)
        return y;
    return z;
}
int minDistance(char* word1, char* word2) {
    int m = strlen(word1);
    int n = strlen(word2);
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
     
            if (i == 0)
                dp[i][j] = j; 

            else if (j == 0)
                dp[i][j] = i;

            else if (word1[i - 1] == word2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];

            else
                dp[i][j] = 1 + min(dp[i][j - 1],     // Insert
                                   dp[i - 1][j],     // Remove
                                   dp[i - 1][j - 1]  // Replace
                                   );
        }
    }
    return dp[m][n];
}