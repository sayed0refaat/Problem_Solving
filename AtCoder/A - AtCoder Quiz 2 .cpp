#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{
    int k;
    cin>>k;
    if(k<40&&k>=0){cout<<40-k<<endl;}
     if(k<70 &&k>=40){cout<<70-k<<endl;}
    if(k<90&&k>=70){cout<<90-k<<endl;}
     if(k>=90){cout<<"expert"<<endl;}

  return 0;
}

