class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
    	sort(nums.begin(),nums.end());
	int n = nums.size();
	for (int i=0;i<n-3;i++)
	{
		for (int j = i + 1; j < n - 2;j++)
		{
			int left = j + 1;
			int right = n - 1;
			while (left < right)
			{
				long long sum = (long long)nums[left] + (long long)nums[right] + (long long)nums[i] + (long long)nums[j];
				if (sum == target)
				{
					ret.push_back({ nums[left],nums[right],nums[i],nums[j] });
					left++;
					right--;
					while (left < right && nums[left] == nums[left - 1])
					{
						left++;
					}
					while (left < right && nums[right] == nums[right + 1])
					{
						right--;
					}
				}
				else if (sum > target)
				{
					right--;
					while (left < right && nums[right] == nums[right + 1])
					{
						right--;
					}
				}
				else
				{
					left++;
					while (left < right && nums[left] == nums[left - 1])
					{
						left++;
					}
				}
			}
			while (j < n - 3&&nums[j]==nums[j+1])
			{
				j++;
			}
		}
		while (i < n - 4 && nums[i] == nums[i + 1])
		{
			i++;
		}
	}
	return ret;
    }
};
