class Solution {
public:
    int maxArea(vector<int>& height) {
	int n = height.size();
	int left = 0;
	int right = n-1;
	int area = 0;
	while (left < right)
	{
		area = max(area,min( height[left] , height[right])*(right-left));
		if (height[left] < height[right])
		{
			int v1 = height[left];
			left++;
			while (v1 >= height[left]&&left<n-1)
			{
				left++;
			}
		}
		else
			{
				int v1 = height[right];
				right--;
				while (v1 >= height[right]&&right>0)
				{
					right--;
				}
			}
	}
	return area;
    }
};
