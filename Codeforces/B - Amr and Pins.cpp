#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
int main()
{
sayed
double r,x,y,xx,yy;
cin>>r>>x>>y>>xx>>yy;

double h=sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y));

double k=ceil(h/(r*2));
cout<<k<<endl;
return 0;
}