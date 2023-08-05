#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
    int n;
    cin>>n;
 
    while(n--){
        int x;
        cin>>x;
        vector<int> vec(x);
        for (auto &i: vec) cin >> i;
 
        map<int, int> frq;
        for (auto i: vec) frq[i]++;
 
         vector<int> v;
        for (auto i: frq) {
            v.push_back(i.second);  // vector of the frequencies got from map value
        }
 
        sort(v.begin(), v.end());
 
        int previous=0;
        int suffix= accumulate(v.begin(), v.end(),0); // calculate sum of all vector of frequencies
        int ans = 1e9;
 
        for (int i = 0; i < v.size(); i++) {
         int x= suffix - ( ( (int)v.size()-i)*(v[i]) ) +previous; /// el fekra kolha fe el equation de 
        if(x<ans) {ans=x;}
        previous+=v[i];
        suffix-=v[i];
 
                }
 
cout<<ans<<endl;
 
    }
 
 
}
 
/// 1 2 3 4 frequencies 
 
/// 1 2 2 2 goal
 
/// suffix -( (n-i)*v[i] )+ previous  // to get number of operations 
/// suggix magmo3 el array kolo , v[i] howa el rakm elly wa2f 3leh * fe rakm el goal 
///                                 2    * (2+2+2)