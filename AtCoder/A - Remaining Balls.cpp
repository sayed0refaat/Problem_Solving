#include <iostream>

using namespace std;

int main()
{
string first,second,u;
int one,two;
cin>>first>>second;
cin>>one>>two;
cin>>u;
if(first==u){
    cout<<one-1<<' '<<two;
}else{
cout<<one<<' '<<two-1;
}
    return 0;
}
