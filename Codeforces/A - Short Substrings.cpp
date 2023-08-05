#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{int n;
cin>>n;
char x[100];
for(int i=0;i<n;i++){
    cin>>x;
    int len=strlen(x);
    cout<<x[0]<<x[1];
    for(int i=3;i<len;i+=2){cout<<x[i];}
    cout<<endl;
}
 
 
 
    return 0;
}