#include <iostream>
using namespace std;



int main()
{
	int size, sizeArray;
	cin >> size >> sizeArray;
	while (size--)
	{
		int* arr = new int[sizeArray];
		for (int i = 0; i < sizeArray; i++)
		{
			cin >> arr[i];
		}
		for (int i = sizeArray - 1; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

