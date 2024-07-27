class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	vector<int>hash(256);
	int n = s.length();
	int left = 0;
	int right = 0;
	int len = 0;
	while (right < n)
	{
		hash[s[right++]]++;
		while (hash[s[right-1]] > 1)
		{
			hash[s[left++]]--;
		}
		len = max(len,right-left);
	}
    return len;
    }
};
