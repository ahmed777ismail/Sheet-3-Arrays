#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int row, column;
	cin >> row >> column;
	char  arr[101][101];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> arr[i][j];
		}
	}
	int prow, pcolumn;
	cin >> prow >> pcolumn;
	prow--;
	pcolumn--;
	int flag = 1;
	for (int i = prow - 1; i <= prow + 1; i++) {

		for (int j = pcolumn - 1; j <= pcolumn + 1; j++) {
			if (i == prow && j == pcolumn) {

			}
			else if (arr[i][j] == '.') {
				flag = 0;
				break;
			}


		}

	}
	if (flag) {
		cout << "yes";
	}
	else cout << "no";

}