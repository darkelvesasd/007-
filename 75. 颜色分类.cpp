class Solution {
public:
void Swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
    void sortColors(vector<int>& nums) {
	int n = nums.size();
	int i = 0;
	int left = -1;
	int right = n;
	while (i < right)
	{
		if (nums[i] == 0&&left+1!=i)
		{
			Swap(&nums[++left], &nums[i]);
		}
		else if (nums[i] == 2)
		{
			Swap(&nums[i], &nums[--right]);
		}
		else
		{
			i++;
		}
	}
    }
};
