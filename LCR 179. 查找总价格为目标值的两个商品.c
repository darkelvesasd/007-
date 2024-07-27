class Solution {
public:
    vector<int> twoSum(vector<int>& price, int target) {
	vector<int> r(2,0);
	int left = 0;
	int right = price.size() - 1;
	while (left < right)
	{
		if (price[left] + price[right] == target)
		{
			r[0] = price[left];
			r[1] = price[right];
			break;
		}
		if (price[left] + price[right] < target)
		{
			left++;
		}
		else
		{
			right--;
		}
	}
    return r;
    }
};
