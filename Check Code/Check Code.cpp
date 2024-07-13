#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	string str;
	cin >> str;
	int flag = 0;
	if (str[a] == '-') {
		flag++;
	}
	if (flag == 0) {
		cout << "No";
		return 0;
	}
	int temp = 0;
	for (int i = 0; i < str.size(); i++) {
		if (i == a) {
			continue; // skip this interation
		}
		else {
			if (str[i] == '-')
			{
				temp = 1;
				break;
			}
		}
	}
	if (temp == 0) {
		flag++;
	}
	if (flag == 2) {
		cout << "Yes";
	}
	else cout << "No";

}