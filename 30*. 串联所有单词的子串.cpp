class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
	vector<int>ret;
	unordered_map<string, int>hash1;
	unordered_map<string, int>hash2;
	int sn = s.length();
	int wn = words.size();
	int wl = words[0].length();
	int count = 0;
	for (int i = 0; i < wn; i++)
	{
		hash2[words[i]]++;
	}
	for (int i = 0; i < wl; i++)
	{
		for (int i = 0; i < wn; i++)
		{
			hash1.erase(words[i]);
		}
		int left = i;
		int right = i;
		count = 0;
		while (right<sn)
		{
			string tmp = s.substr(right,wl);//当前字符串
			hash1[tmp]++;
			if (hash1[tmp] <= hash2[tmp])
			{
				count++;
			}
			right += wl;
			while (right-left>wn*wl)
			{
				string tmp1 = s.substr(left,wl);
				if (hash1[tmp1] <= hash2[tmp1])
				{
					count--;
				}
				hash1[tmp1]--;
				left += wl;
			}
			if (count == wn)
			{
				ret.push_back(left);
			}
		}
	}
	return ret;
    }
};
