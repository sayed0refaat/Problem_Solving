#include <iostream>

using namespace std;

int main()
{
int first;
cin>>first;
string op;
cin>>op;
int second;
cin>>second;
if(op=="+"){
    cout<<first+second;
}else{
cout<<first-second;
}
    return 0;
}