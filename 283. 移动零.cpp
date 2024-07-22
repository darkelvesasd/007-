class Solution {
public:
    void moveZeroes(vector<int>& nums) {
	int src = 0;
	int dst = 0;
	int n = nums.size();
	while (src < n)
	{
		if (nums[src] == 0)
		{
			src++;
		}
		else
		{
			nums[dst++] = nums[src++];
		}
	}
	while (dst < n)
	{
		nums[dst++] = 0;
	}
    }
};
