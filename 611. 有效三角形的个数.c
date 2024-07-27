class Solution {
public:
    int triangleNumber(vector<int>& nums) {
sort(nums.begin(),nums.end());
	int sum = 0;
	for (int end = nums.size() - 1; end > 1; end--)
	{
		int left = 0;
		int right = end - 1;
		while (left < right)
		{
			if (nums[left] + nums[right] > nums[end])
			{
				sum+=right-left;
				int v = nums[right];
				while (nums[right-1] == v&&right-1>left)
				{
					right--;
					sum += right - left;
				}
				right--;
			}
			else
			{
				int v = nums[left];
				while (nums[left+1] == v && right > left+1)
				{
					left++;
				}
				left++;
			}
		}
	}
	return sum;
    }
};
