#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    unordered_set<int> A;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        A.insert(num);
    }

    for (int i = 0; i < Q; ++i) {
        int X;
        cin >> X;
        if (A.find(X) != A.end()) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
