#include<iostream>
#include<vector>
using namespace std;
int kuai(int a)
{
	int sum = 0;
	while (a)
	{
		sum += (a % 10)*(a%10);
		a /= 10;
	}
	return sum;
}
bool isHappy(int n) {
	int fast = kuai(kuai(n));
	int slow = kuai(n);
	while (slow != fast)
	{
		slow = kuai(slow);
		fast = kuai(kuai(fast));
	}
	if (slow == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	printf("%d",isHappy(19));
	return 0;
}
