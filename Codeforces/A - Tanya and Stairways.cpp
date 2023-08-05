#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
vector<int> vec;
vector<int>output_vec;
int n;
cin>>n;
int last=n-1;
int counter=1;
while(n--){
int x;cin>>x;
vec.push_back(x);
}
 
 
for(int i=1;i<vec.size();i++){
    if(vec[i]==1){counter++; output_vec.push_back(vec[i-1]); }
}
cout<<counter<<"\n";
for(int i=0;i<output_vec.size();i++){
    cout<<output_vec[i]<<" ";}
cout<<vec[last];
 
 
	return 0;
}