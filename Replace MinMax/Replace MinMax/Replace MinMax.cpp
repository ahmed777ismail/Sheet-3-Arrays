#include <iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int maxx = INT_MIN;
	int minn = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		maxx = max(maxx, arr[i]);
		minn = min(minn, arr[i]);
	}

	int posm, posmi;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == maxx)
			posm = i;
		else if (arr[i] == minn)
			posmi = i;
	}
	int temp = arr[posm];
	arr[posm] = arr[posmi];
	arr[posmi] = temp;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
