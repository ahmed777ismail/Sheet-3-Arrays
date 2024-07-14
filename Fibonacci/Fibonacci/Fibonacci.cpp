#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	long long* arr = new long long[51];
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i < 51; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (int i = 1; i <= 50; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

