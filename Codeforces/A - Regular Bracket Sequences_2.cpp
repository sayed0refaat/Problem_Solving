#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main()
{
    sayed
    int n,x;
    cin>>n;
   while (n--){
        cin>>x;
  //cout<<string(x,'c')<<endl;
   for(int i=1;i<=x;i++) {
    cout<< string(i,'(') << string(i,')') <<string(x-i,'(') << string(x-i,')') ;
    cout<<endl;
   }
 
}
 
return 0;
}