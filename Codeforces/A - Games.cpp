#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{ int teams,counter=0;
cin>>teams;
int home[teams],guest[teams];
for(int i=0; i<teams; i++){
cin>>home[i];
cin>>guest[i];
}
for(int i=0; i<teams; i++){
  for(int j=0; j<teams;j++){
    if(home[i]==guest[j]){counter++;}
}
}
  cout<<counter<<endl;
}