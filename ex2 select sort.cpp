#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        int max_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (v[j] > v[max_idx]) {
                max_idx = j;
            }
        }

        int temp = v[i];
        v[i] = v[max_idx];
        v[max_idx] = temp;
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}