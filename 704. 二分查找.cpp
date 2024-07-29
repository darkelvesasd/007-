class Solution {
public:
    int search(vector<int>& nums, int target) {
	int left = 0;
	int right = nums.size() - 1;
	int ret = INT_MAX;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (target == nums[mid])
		{
			ret = mid;
			break;
		}
		if (target > nums[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return ret == INT_MAX ? -1 : ret;
    }
};
