#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cin>>a>>b>>x;
 if(a<x && (a+b)>=x ||a==x){
    cout<<"YES";
}if(a<x && (a+b)<x){
cout<<"NO";
}if(a>x){
cout<<"NO";
}

    return 0;
}
