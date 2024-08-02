class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int ,int>hash;
    int sum = 0;
    int a = 0;
    hash[0] = 1;
    for (int i=0;i<n;i++)
    {
        a = a + nums[i];
        sum += (hash[(a % k + k) % k]);
        hash[(a%k + k) % k]++;
    }
    return sum;
    }
};
