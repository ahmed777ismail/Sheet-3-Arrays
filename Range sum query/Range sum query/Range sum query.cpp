#include <iostream>
using namespace std;


int main()
{
	int size;
	cin >> size;

	int q;
	cin >> q;

	long long* arr = new long long[size];
	long long* sum = new long long[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];

		if (i == 0)
			sum[i] = arr[i];
		else
			sum[i] = sum[i - 1] + arr[i];
	}

	for (int i = 0; i < q; i++)
	{
		int l, r;
		cin >> l >> r;
		l--;
		r--;

		if (l == 0)
			cout << sum[r] << endl;
		else
			cout << sum[r] - sum[l - 1] << endl;
	}

	return 0;
}

