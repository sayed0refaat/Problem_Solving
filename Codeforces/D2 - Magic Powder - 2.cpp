#include <iostream>
 
using namespace std;
long long n, k, Uneed[1000001], Uhave[1000001];
 
 
bool isOk(long long x){
    long long  tempk = k;
    for(int i=0;i<n;i++){
        if(Uhave[i] < x*Uneed[i]){
            long long  diff = ((x*Uneed[i]) - Uhave[i]);
            if(tempk  >= diff)
                tempk -= diff; /// k = k-((x*Uneed) - Uhave);
            else
                return false;
        }
    }
    return true;
}
 
long long binarySearch(){
    int l=0;
    long long h = 2e9, mid;
 
    while(l<h){
        mid = (l+h+1)/2; /// go near h
        if(isOk(mid))
            l = mid;
        else
            h = mid - 1;
    }
 
    return l;
}
 
 
int main()
{
 
    cin>>n>>k;
 
    for(long long i=0;i<n;i++)
        cin>>Uneed[i];
 
    for(long long i=0;i<n;i++)
        cin>>Uhave[i];
 
 
    cout<<binarySearch();
 
    return 0;
}