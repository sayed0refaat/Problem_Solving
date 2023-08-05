#include<bits/stdc++.h>
using namespace std;

#include <math.h>

int main()
{



float f;
cin>>f;
int x;
x=int(f);
float finaly=f-x;



float y=(finaly*10);

if(y>6&&y<=9)cout<<x<<"+"<<endl;
if(y<=2)cout<<x<<"-"<<endl;
if(y>=3&&y<=6)cout<<x<<endl;



}