#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int n,m,maxx=0,last=0;
double c;
cin>>n>>m;
vector<int> vec;
 
for(int i=0;i<n;i++){
    cin>>c;
    if(ceil(c/m)>=maxx){maxx=ceil(c/m);last=i+1;}
}
 
cout<<last;
///  2 dividor
///  1 3 1 4 2
///  0 1 0 2 1
 
 
 
	return 0;
}