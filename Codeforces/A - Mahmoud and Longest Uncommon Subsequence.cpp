#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
   string a,b;
   cin>>a>>b;
   if(a.size()==b.size()&& a==b){cout<<"-1"<<endl;}
   else if(a.size()>b.size()){cout<<a.size()<<endl;}
   else if(a.size()<b.size()){cout<<b.size()<<endl;}
   if(a.size()==b.size()&& a!=b){cout<<b.size()<<endl;}
    return 0;
}