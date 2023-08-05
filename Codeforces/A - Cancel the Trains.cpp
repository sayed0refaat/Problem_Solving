#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int n ,a,b;
cin>>n;
 
while(n--){ int ans=0;
 cin>>a;int arr[a];cin>>b;int arr2[b];
  for(int i=0;i<a;i++)   {cin>>arr[i];}
  for(int i=0;i<b;i++)   {cin>>arr2[i];}
  for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++)
			if (arr[i] == arr2[j]){
				ans++;}
  }
  cout<<ans<<endl;
}
 
 
 
	return 0;
}