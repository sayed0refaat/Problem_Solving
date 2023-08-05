#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n,l;
cin>>n>>l;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];} ///input
 
sort(arr, arr + n);
 
int maxx=0;
 
for(int i=0;i<n-1;i++){
    if(arr[i+1]-arr[i]>maxx)
        {
            maxx=arr[i+1]-arr[i];
        }
}
 
 
   double answer=max(double (arr[0]),double(maxx)/2);
   double z = l - arr[n-1];
    answer = max(z,answer);
 
    cout<<fixed<<setprecision(20)<<answer;
 
   return 0;
 
}
