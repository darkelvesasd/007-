class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
	int sum = 0;
	int n = nums.size();
	for (int i=0;i<n;i++)
	{
		sum += nums[i];
	}
	int target = sum - x;
	int left = 0;
	int right = 0;
	int s=0;
	int len = -1;
    	if (target == 0)
	{
		return n;
	}
	while (right < n)
	{
		s += nums[right++];
		while (s >= target&&left<right)
		{
			if (s == target)
			{
				len = max(len, right - left);
			}
			s -= nums[left++];
		}
	}
	return len <0 ? len :  n-len;
    }
};
