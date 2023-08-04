#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
    int num,counter=0;
    cin>>num ;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
       // arr[num]==arr[0];
    }
    sort(arr,arr+num);
    for(int i=1; i<=num-1; i++){
        if(arr[i]<arr[num-1] && arr[i]>arr[0]){counter++;}
    }
    cout<<counter<<endl;
        return 0;
}