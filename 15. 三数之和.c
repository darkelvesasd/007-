class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
	sort(nums.begin(), nums.end());
	int n = nums.size();
	for (int i = 0; i < n; i++)
	{
		int t = -nums[i];
		int left = i+1;
		int right = n - 1;
		while (left < right)
		{
			int l = nums[left];
			int r = nums[right];
			if (l+r == t)
			{
				result.push_back({nums[i],nums[left],nums[right]});
				while (right - 1 > left && nums[right - 1] == nums[right]  )
				{
					right--;
				}
				right--;
			}
			else if (l + r < t)
			{
				while (left + 1 < right && nums[left+ 1] == nums[left] )
				{
					left++;
				}
				left++;
			}
			else
			{
				while (right - 1 > left && nums[right - 1] == nums[right] )
				{
					right--;
				}
				right--;
			}			
		}
		while (i+1<n-1&&nums[i+1]==nums[i])
		{
			i++;
		}
		right--;
	}
	return result;
    }
};
