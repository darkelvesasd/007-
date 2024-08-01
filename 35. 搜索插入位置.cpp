class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
	int right = nums.size() - 1;
    	int left = 0;
	while (left<right)
	{
		int mid = (right - left) / 2 + left;
		if (nums[mid]<target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}
	}
    if (left == nums.size()-1 && nums[left] < target)
	{
		return left + 1;
	}
    return left;
    }
};
