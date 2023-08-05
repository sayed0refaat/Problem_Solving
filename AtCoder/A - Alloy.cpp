#include<bits/stdc++.h>
using namespace std;

#include <math.h>

int main()
{
int a,b;
cin>>a>>b;
if(a>0&&b>0)cout<<"Alloy"<<endl;
if(a==0&&b>0)cout<<"Silver"<<endl;
if(a>0&&b==0)cout<<"Gold"<<endl;
}
