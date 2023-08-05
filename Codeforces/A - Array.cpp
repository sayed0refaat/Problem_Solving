#include <iostream>
using namespace std;
#include<vector>
#include <bits/stdc++.h>
 
int main() {
 
int n;
cin>>n;
vector<int> vec_negative;
vector<int> vec_positive;
vector<int> vec_zero;
 
while(n--){
	int x;
	cin>>x;
	if(x<0){vec_negative.push_back(x);}
	else if(x==0){vec_zero.push_back(x);}
    else if(x>0){vec_positive.push_back(x);}
 
}
 
if(vec_positive.empty()){
 int elementone= vec_negative.back();
 vec_positive.push_back(elementone);
vec_negative.pop_back();
 
 int elementtwo= vec_negative.back();
 vec_positive.push_back(elementtwo);
 vec_negative.pop_back();
 
}
 
 
if(vec_negative.size()%2==0){
 int element= vec_negative.back();
 vec_zero.push_back(element);
 vec_negative.pop_back();
}
 
cout<<vec_negative.size()<<" ";
for(auto i : vec_negative){cout<<i<<" ";}
cout<<endl;
 
 
cout<<vec_positive.size()<<" ";
for(auto i : vec_positive){cout<<i<<" ";}
cout<<endl;
 
cout<<vec_zero.size()<<" ";
for(auto i : vec_zero){cout<<i<<" ";}
cout<<endl;
 
 
	return 0;
}