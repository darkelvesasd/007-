class Solution {
public:
    int totalFruit(vector<int>& fruits) {
	int n = fruits.size();
	unordered_map<int,int>s;
	int left = 0;
	int right = 0;
	int len = 0;
	while (right < n)
	{
		s[fruits[right++]]++;
		while (s.size() > 2)
		{
			s[fruits[left]]--;
			if (s[fruits[left]] == 0)
			{
				s.erase(fruits[left]);
			}
			left++;
		}
		len = max(len, right - left);
	}
	return len;
    }
};
