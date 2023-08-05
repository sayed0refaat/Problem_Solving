#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int c(int a,int b,int c,int d){
for(int i=1;i<=6;i++){
        int e=0,counter=0;
    if(a==i||b==i||c==i||d==i){counter++;}
    else return i;
}
}int d(int a,int b,int c,int d,int e){
for(int i=1;i<=6;i++){
        int f=0,counter=0;
    if(a==i||b==i||c==i||d==i||e==i){counter++;}
    else  return i;
}
}
 
 
int main()
{ bool flag=true;
    int n,x,a,b,h,g;
    cin>>n>>x;
    int arr[n*2];
    for(int i=0;i<n*2;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n*2;i+=2){
     a=7-arr[i];b=7-arr[i+1];
     h=c(arr[i],arr[i+1],a,b);
     g=d(arr[i],arr[i+1],a,b,h);
    // cout<<h<<g<<endl;
     if(h==x&&g==7-x){/*if(h!=7-x||g!=7-x)*/flag=true;}
     else if(g==x&&h==7-x)flag=true;
     else {flag=false;break;}
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}