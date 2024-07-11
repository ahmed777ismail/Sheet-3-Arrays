using namespace std;
#include <iostream>
#include <algorithm>
#include<array>
#include <vector>
int main()
{
    int nums, xx, test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {

        cin >> nums;
        int* arr = new int[nums];
        vector<int>fady;
        for (int i = 0; i < nums; i++)
        {
            cin >> arr[i];
        }
        for (int x = 0; x < nums; x++)
        {
            for (int i = 0 + x; i < nums; i++)
            {
                fady.push_back(arr[i]);
                cout << *max_element(fady.begin(), fady.end()) << " ";
            }
            fady.clear();
        }
        cout << "\n";
    }
}