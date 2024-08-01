class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int>dp1(n + 1,1);
    vector<int>dp2(n + 1,1);
    vector<int>ret;
    for (int i = 1; i < n; i++)
    {
        dp1[i] = nums[i - 1] * dp1[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        dp2[i] = nums[i + 1] * dp2[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        ret.push_back(dp1[i]*dp2[i]);
    }
    return ret;
    }
};
