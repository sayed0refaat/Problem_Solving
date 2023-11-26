#include<bits/stdc++.h>
using namespace std;



int main()
{
int n,ans=0; cin>>n;
int arr[n];

for(int i=0;i<n;i++){
        cin>>arr[i];
}


sort(arr,arr+n);

int p1=0,p2=n/2;

while(p1 < n/2 && p2 < n){
    if(2*arr[p1]<=arr[p2]){
        p1++; p2++; ans++;
    }
    else p2++;
}
cout<<n-ans<<endl;


           return 0;
}

