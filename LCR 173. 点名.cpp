class Solution {
public:
    int takeAttendance(vector<int>& records) {
	int left = 0;
	int right = records.size() - 1;
	while (left<right)
	{
		int mid = (right - left) / 2 + left;
		if (records[mid] ==mid)
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}
	}
	if (records[records.size() - 1] == left)
	{
		return left + 1;
	}
	return left;
    }
};
