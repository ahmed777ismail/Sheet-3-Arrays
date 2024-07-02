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
		if (arr[i] <= 10)
		{
			cout << "A[" << i << "] = " << arr[i] << endl;
		}
	}

}

