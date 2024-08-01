class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    unordered_map<int, int>hash(n+1);
    hash[0] = 1;
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] + nums[i - 1];
        sum += hash[dp[i] - k];
        hash[dp[i]]++;
    }
    return sum;
    }
};
