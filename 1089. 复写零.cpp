class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
int n = arr.size();
	int top = -1;
	int i = -1;
	while(top<n-1)
	{
		i++;
		if (arr[i])
		{
			top++;
		}
		else
		{
			top += 2;
		}
	}
	if (top >= n)
	{
		arr[--top] = 0;
		i--;
		top--;
	}
	while (i >= 0)
	{
		if (arr[i])
		{
			arr[top--] = arr[i--];
		}
		else
		{
			arr[top--] = arr[i];
			arr[top--] = arr[i--];
		}
	}
    }
};
