class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int count = 0;
    unordered_map<int, int>hash;
    hash[0] = -1;
    for (int i=0;i<n;i++)
    {
        if (nums[i] == 0)
        {
            nums[i] = -1;
        }
    }
    for (int i=0;i<n;i++)
    {
        sum += nums[i];
        if (!hash.count(sum))
        {
            hash[sum] = i;
        }
        count = max(count, i - hash[sum]);
    }
    return count;
    }
};
