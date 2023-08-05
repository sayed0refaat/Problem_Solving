#include<bits/stdc++.h>
using namespace std;



int main()
{
    int index;
    cin>>index;

    char arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];

    }
    if(arr[index-1]=='o')cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}