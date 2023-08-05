#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
      int q;
    cin >> q;
 
    map<int, int> min_heap; // stores (order of arrival, customer number)
    map<int, set<int>, greater<>> max_heap;// stores (expected spending amount, customer number)
 
    int order = 1; // initialize the order of arrival to 1
 
    while(q--) {
        int type;
        cin >> type;
 
        if(type == 1) {
            int x;
            cin >> x;
 
            min_heap[order] = x; // push the customer number along with the order of arrival
            max_heap[x].insert(order);// push the customer number along with the expected spending amount
 
            order++;
        }
        else if(type == 2) {
                  cout << min_heap.begin()->first << ' ';
            max_heap[min_heap.begin()->second].erase(min_heap.begin()->first);
            if (max_heap[min_heap.begin()->second].empty())
                max_heap.erase(min_heap.begin()->second);
            min_heap.erase(min_heap.begin());
 
 
        }
        else {
 
            cout << *max_heap.begin()->second.begin() << ' ';
            min_heap.erase(*max_heap.begin()->second.begin());
            max_heap.begin()->second.erase(max_heap.begin()->second.begin());
            if (max_heap.begin()->second.empty())
                max_heap.erase(max_heap.begin());
        }
    }
 
}