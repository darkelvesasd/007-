class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    vector<int>dp1(n+1);
    vector<int>dp2(n+1);
    for (int i=1;i<=n;i++) 
    {
        dp1[i] = dp1[i - 1] + nums[i - 1];
    }
    for (int i=n-1;i>=0;i--)
    {
        dp2[i] = dp2[i + 1] + nums[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp1[i] == dp2[i-1])
        {
            return i-1;
        }
    }
    return -1;
    }
};
