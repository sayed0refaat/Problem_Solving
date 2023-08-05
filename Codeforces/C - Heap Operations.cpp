#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    vector<string> operations;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "insert") {
            int x;
            cin >> x;
            pq.push(x);
            operations.push_back("insert " + to_string(x));
        } else if (op == "getMin") {
            int x;
            cin >> x;
            while (!pq.empty() && pq.top() < x) {
                pq.pop();
                operations.push_back("removeMin");
            }
            if (pq.empty() || pq.top() != x) {
                pq.push(x);
                operations.push_back("insert " + to_string(x));
            }
            operations.push_back("getMin " + to_string(x));
        } else if (op == "removeMin") {
            if (pq.empty()) {
                operations.push_back("insert " + to_string(3));
                pq.push(3);
            }
            pq.pop();
            operations.push_back("removeMin");
        }
    }
    cout << operations.size() << endl;
    for (auto i: operations)
        cout << i << '\n';
}