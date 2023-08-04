#include <iostream>
#include<string>
#include<algorithm>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{ int cities;
cin>>cities;
int arr[cities]; long long  mini,maxi;
for(int i=0; i<cities; i++){
    cin>>arr[i];
}
for(int k=0; k<cities; k++){
   if(k==0){ mini=abs(arr[k]-arr[k+1]); maxi=abs(arr[k]-arr[cities-1]);}
   else if(k==cities-1){mini=abs(arr[k]-arr[k-1]); maxi=abs(arr[k]-arr[0]);}
   else {mini=min(abs(arr[k]-arr[k-1]),abs(arr[k]-arr[k+1])); maxi=max(abs(arr[k]-arr[0]),abs(arr[k]-arr[cities-1]));}
   cout<<mini<<" "<<maxi<<endl;
 
}
return 0;
}