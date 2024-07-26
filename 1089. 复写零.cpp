class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
vector<int> queue(10000);
	int front = 0;
	int rear = 0;
	int n = arr.size();
	for (int i = 0; i < n; i++)
	{
		queue[front++] = arr[i];
	}
	int i = 0;
	while (rear < front&&i<n)
	{
		int c = queue[rear++];
		if (c == 0)
		{
			arr[i++] = c;
			if (i < n)
			{
				arr[i++] = c;
			}
		}
		else
		{
			arr[i++] = c;
		}
	}
    }
};
