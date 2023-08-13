#include <bits/stdc++.h>
using namespace std;
long long maxx=1000000;
int main() {

 int n ;

cin >>n;

long long arr [maxx] , num ;

/// order by appearance

/// input
///  4  6  1  9  7
///  Array
///  3 0 0 1 0 2 5 0 4



    for (long long i = 1 ; i <= n ; i++)
    {
        cin>>num ;
        arr [num] = i ;
    }

    int M , q  ;
    long long tot1 = 0  , tot2 = 0 ;

    cin>>M ;


    while(M--)
    {
        cin>>q ;

       tot1 += arr [q] , tot2 += n - arr [q] + 1 ;
    }

cout<<tot1 <<" " <<tot2 ;
   return 0;
}
