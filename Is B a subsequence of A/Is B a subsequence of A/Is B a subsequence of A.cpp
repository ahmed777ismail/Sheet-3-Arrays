#include <iostream>
using namespace std;



int main()
{
	long long size, sizesqu;
	cin >> size >> sizesqu;
	long long* arr = new long long[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	long long* arrsqu = new long long[sizesqu];
	for (int i = 0; i < sizesqu; i++)
	{
		cin >> arrsqu[i];
	}
	int z = 0;
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arrsqu[z])
		{
			counter++;
			z++;
		}
	}

	if (counter == sizesqu)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

