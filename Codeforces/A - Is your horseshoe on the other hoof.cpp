#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    int arr[4], counter=0;
    for(int i=0; i<4; i++){
    cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0; i<4; i++){
        if(arr[i]==arr[i+1]){counter++;}
    }
    cout<<counter<<endl;
}