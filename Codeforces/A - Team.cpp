#include <iostream>
#include<string>
using namespace std;
int main()
{
  int prop_nums,x,y,z,total=0;
  cin>>prop_nums;
  for(int i=0; i<prop_nums; i++){
    cin>>x>>y>>z;
    total+=(x+y+z>=2);
  }
 cout<<total;
}