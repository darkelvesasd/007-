class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
int left = 0;
	int right = nums.size() - 1;
	int ret1,ret2;
	int mid = 0;
	if (nums.size() == 0)
	{
		return{ -1,-1 };
	}
	while (left < right)
	{
		mid = (right - left+1) / 2 + left;
		if (nums[mid] <= target)
		{
			left = mid;
		}
		else
		{
			right = mid - 1;
		}
	}
	ret1 = left;
	 left = 0;
	right = nums.size() - 1;	
	while (left < right)
	{
		mid = (right - left ) / 2 + left;
		if (nums[mid] >= target)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	ret2 = left;
	if (nums[left] == target)
	{
		return { ret2,ret1};
	}
	return {-1,-1};
    }
};
