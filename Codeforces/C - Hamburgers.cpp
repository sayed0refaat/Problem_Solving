#include <iostream>
 
using namespace std;
string n ; int  b_count=0,s_count=0,c_count=0, Uneed[1001], Uhave[1001],price[1001];
long long k;
 
bool isOk(long long x){///x==mid
    long long temp=k;
   // int tempk[3] ;tempk[0] = price[0];  tempk[1] = price[1];    tempk[2] = price[2];
    for(int i=0;i < 3 ; i++){
        if(Uhave[i] < x*Uneed[i]){
            long long diff = ((x*Uneed[i]) - Uhave[i]);
            if(price[i]*diff  <=temp )
                temp -= price[i]*diff; /// k = k-((x*Uneed) - Uhave);
            else
                return false;
        }
    }
    return true;
}
 
long long binarySearch(){
    long long l=0;
 long long h = 2e12+1, mid;
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
 
    cin>>n;
 
 
    for(int i=0;i<3;i++)
        {cin>>Uhave[i];}
 
    for(int i=0;i<3;i++)
       {cin>>price[i];}
 
            cin>>k;
 
    for(int i=0;i<n.length();i++)
        {
            if(n[i]=='B'){b_count++;}
            if(n[i]=='S'){s_count++;}
            if(n[i]=='C'){c_count++;}
 
            }Uneed[0]=b_count;Uneed[1]=s_count;Uneed[2]=c_count;
 
    cout<<binarySearch();
 
 
    return 0;
}