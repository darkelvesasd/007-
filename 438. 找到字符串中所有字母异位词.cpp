vector<int>ret;
	int hash1[26] = { 0 };
	int hash2[26] = { 0 };
	int n1 = s.length();
	int n2 = p.length();
	int count=0;
	for (int i = 0; i < n2; i++)
	{
		hash2[p[i]-'a']++;
	}
	int left = 0;
	int right = 0;
	while (right<n1)
	{
		hash1[s[right]-'a']++;
		if (hash1[s[right] - 'a'] <= hash2[s[right] - 'a'])
		{
			count++;
		}
		right++;
		while (right - left > n2)
		{
			if (hash1[s[left] - 'a'] <= hash2[s[left]-'a'])
			{
				count--;
			}
			hash1[s[left++] - 'a']--;
		}
		if (count==n2)
		{
			ret.push_back(left);
		}
	}
