#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int left = 0, right = 0;
    int totalTime = 0, maxBooks = 0;

    while (right < n) {
        if (totalTime + a[right] <= t) {
            totalTime += a[right];
            ++right;
            maxBooks = max(maxBooks, right - left);
        } else {
            totalTime -= a[left];
            ++left;
        }
    }

    cout << maxBooks << endl;

    return 0;
}