#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{

    int n,r,sum=0,temp;

  cin>>n;

 for(int i=0;i<10;i++){if(n%10==0) {n=n/10;}} temp=n;

 while(n>0)
{
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
if(temp==sum) {cout<<"Yes"<<endl;}

else
cout<<"No"<<endl;


  return 0;
}
