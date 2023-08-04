#include <iostream>
 
using namespace std;
 
int main()
{
    int num,counter=0,order=0;
    cin>>num;
    int arr[num*2];
    for(int i=0; i<num*2; i++){
        cin>>arr[i];
    }
    for(int j=0; j<num*2; j+=2){
        if(arr[j]!=arr[j+1]){counter++;}
        if(arr[j]<arr[j+2] && j!=num*2-2){order++;}
    }
  //  cout<<counter<<endl;
    //cout<<order<<endl;
    if(counter>=1){cout<<"rated"<<endl;}
    else if(counter>=0 && order >=1){cout<<"unrated"<<endl;}
    else if(counter>=0 && order ==0){cout<<"maybe"<<endl;}
 
    return 0;
}