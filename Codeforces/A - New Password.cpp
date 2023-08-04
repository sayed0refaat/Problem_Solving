#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
 
{
 int pass,distinct;
 string str;
 cin>>pass>>distinct;
 string str0="abcdefghijklmnopqrstuvwxyz";
 for(int i=0; i<pass; i++){
  str +=str0[i%distinct];
 }
cout<<str<<endl;
 
return 0;
}