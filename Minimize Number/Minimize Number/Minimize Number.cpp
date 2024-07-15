#include <iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int num = 0, minn = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		num = 0;
		while (arr[i] % 2 == 0)
		{
			num++;
			arr[i] /= 2;
		}
		minn = min(num, minn);
	}
	cout << minn;

	return 0;
}

