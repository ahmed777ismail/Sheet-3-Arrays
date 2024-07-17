#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i]) 
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
	return 0;
}

