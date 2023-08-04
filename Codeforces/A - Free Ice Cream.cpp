#include <iostream>
#include<string>
using namespace std;
int main()
{
    long long  numofoperations,intialvalue;
    cin>>numofoperations>>intialvalue;
    long long sum=intialvalue, counter=0;
    for(int i=0; i<numofoperations; i++){
        char ar; long long  num;
        cin>>ar>>num;
        if(ar=='+' ){sum+=num;}
        else if(ar=='-' && sum>=num){sum-=num;}
            else if(ar=='-' && sum<=num){counter++;}
    }
cout<<sum<<" "<<counter<<endl;
    return 0;
}