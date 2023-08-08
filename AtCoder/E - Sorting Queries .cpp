#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    queue<int> Q1;
priority_queue<int, vector<int>, greater<>> Q2; /// we will start filling it when op=3

    while (n--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            cin >> x;
            Q1.push(x);
        }
        else if (op == 2) {
            if (!Q2.empty()) {
                cout << Q2.top() << '\n';
                Q2.pop();
            }
            else {
                cout << Q1.front() << '\n';
                Q1.pop();
            }

        } else if (op == 3) {
            while (!Q1.empty())
                Q2.push(Q1.front()), Q1.pop();
        }
    }

}
