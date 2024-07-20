#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    // Allocate memory for the rows
    int** arr = new int* [r];
    for (int i = 0; i < r; ++i) {
        // Allocate memory for the columns of each row
        arr[i] = new int[c];
    }

    // Input elements into the array
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;

    // Search for the number in the array
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (arr[i][j] == x) {
                cout << "will not take number" << endl;

                // Deallocate memory
                for (int i = 0; i < r; ++i) {
                    delete[] arr[i];
                }
                delete[] arr;

                return 0;
            }
        }
    }

    cout << "will take number" << endl;

    // Deallocate memory
    for (int i = 0; i < r; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
