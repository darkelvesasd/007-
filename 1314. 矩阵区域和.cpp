class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
	int m = mat.size();
	int n = mat[0].size();
	vector<vector<int>>dp(m+1,vector<int>(n+1));
	for (int i=1;i<=m;i++)
	{
		for (int j = 1; j <= n; j++)
		{
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + mat[i - 1][j - 1];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat[i][j] = dp[min(i + 1 + k, m )][min(n , j + 1 + k)] - dp[min(i + 1 + k, m )][max(0, j - k)] - dp[max(i - k, 0)][min(n , j + 1 + k)] + dp[max(0, i - k)][max(0, j - k)];
		}
		}
		
	return mat;
    }
};
