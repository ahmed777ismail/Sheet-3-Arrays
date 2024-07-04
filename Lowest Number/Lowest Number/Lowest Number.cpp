#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    int minn = v[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < minn)
        {
            minn = v[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == minn)
        {
            index = i;
            break;
        }
    }
    cout << minn << " " << index + 1;
    return 0;
}

