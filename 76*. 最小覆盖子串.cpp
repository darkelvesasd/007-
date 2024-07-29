class Solution {
public:
    string minWindow(string s, string t) {
	int count = 0;
	int sl = s.size();
	int tl = t.size();
	int hash1[128] = {0};
	int hash2[128] = {0};
	int pos=-1;
	int length = INT_MAX;
	for (int i = 0; i < tl; i++)
	{
		hash2[t[i]]++;
	}
	int left = 0;
	int right = 0;
	while (right < sl)
	{
		hash1[s[right]]++;
		if (hash1[s[right]] <= hash2[s[right]])
		{
			count++;
		}
		right++;
		while (count == tl)
		{
			if (right - left < length)
			{
				length = right - left;
				pos = left;
			}
			if (count == tl)
			{
				if (hash1[s[left]] <= hash2[s[left]])
				{
					count--;
				}
				hash1[s[left++]]--;
			}
		}
	}
	return pos==-1?"":s.substr(pos,length);
    }
};
