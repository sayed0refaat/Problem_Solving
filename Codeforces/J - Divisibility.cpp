using namespace std;
#include <iostream>
#include <stdio.h>
#include <cmath>
 
int beemale(int x){
if(x==1){return 1;}
else {return beemale(x)+beemale(x-1);}
}
long long countnum(double long n){
return (n/2520);
 
}
int main()
{
int counter=0;
    double long x;
    cin>>x;
    cout<<countnum(x)<<endl;
 
 
 
 
    return 0;
}