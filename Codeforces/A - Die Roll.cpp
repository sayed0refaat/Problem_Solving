#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{ int x,y;
cin>>x>>y;
string prop[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
int z=max(x,y);
cout<<prop[6-z]<<endl;
}