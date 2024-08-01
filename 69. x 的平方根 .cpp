class Solution {
public:
    int mySqrt(int x) {
	int left = 0;
	long long right = INT_MAX/2;
	while (left<right)
	{
		long long mid =(long)(right - left + 1) / 2 + left;
		if (x<(long long)(mid*mid))
		{
			right = mid - 1;
		}
		else
		{
			left = mid;
		}
	}
	return left;
    }
};
