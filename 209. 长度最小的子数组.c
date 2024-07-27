class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
	int n = nums.size();
	int sum = 0;
	int len = INT_MAX;
	int right = 0;
	int left = 0;
	while (right < n)
	{
		if (sum < target)
		{
			sum += nums[right++];
		}
		else
		{
			len = min(len, right - left);
			sum -= nums[left++];
		}
		while (sum >= target)
		{
			len = min(len, right - left);
			sum -= nums[left++];
		}
	}
    return len==INT_MAX?0:len;
    }
};
