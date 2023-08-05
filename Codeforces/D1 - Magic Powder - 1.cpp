#include <iostream>
 
using namespace std;
int n, k, Uneed[1001], Uhave[1001];
 
 
bool isOk(int x){
    int tempk = k;
    for(int i=0;i<n;i++){
        if(Uhave[i] < x*Uneed[i]){
            int diff = ((x*Uneed[i]) - Uhave[i]);
            if(tempk  >= diff)
                tempk -= diff; /// k = k-((x*Uneed) - Uhave);
            else
                return false;
        }
    }
    return true;
}
 
int binarySearch(){
    int l=0, h = 2e3, mid;
 
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
 
    for(int i=0;i<n;i++)
        cin>>Uneed[i];
 
    for(int i=0;i<n;i++)
        cin>>Uhave[i];
 
 
    cout<<binarySearch();
 
    return 0;
}