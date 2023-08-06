#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int n,tax=206,x;
    cin>>n;
//float x;
x=1.08*n;
//cout<<x<<endl;
    if(x<tax){cout<<"Yay!"<<endl;}
    if(x>tax){cout<<":("<<endl;}
    if(x==tax){cout<<"so-so"<<endl;}
    return 0;
}
