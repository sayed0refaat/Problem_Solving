#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <math.h>


int main()
{

long long n, sum1 = 0, sum2= 0, counter = 0;
    cin >> n;
    long long arr[n + 1], arr2[n + 1];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i] >> arr2[i];
    }
    for (int i = 0; i < n; ++i) {
        sum1 += arr[i];
    }
    for (int i = 0; i < n; ++i) {
        long long temp = arr[i];
        arr[i] = 2 * arr[i] + arr2[i];
        arr2[i] = temp;
    }
    sort(arr, arr+n);
    sort(arr2, arr2+n);
    long long d = n - 1;
    while (sum1>= sum2)
    {
        counter++;
        sum2+= arr[d] - arr2[d];
        sum1 -= arr2[d];
        d--;
    }
    cout << counter;
}


for(int i=0;i<n;i++){
    a+=arr[i][0];
    b+=arr[i][1];


}
///cout<<a<<b;
if (a<b){cout<<"0"<<endl; return 0;}
else if(a==b){cout<<"1"<<endl;return 0;}

for(int i=0;i<n;i++){int temp=a;int temp2=a;
 ///  c=(arr[i][0]+arr[i][1]); counter++;
    if(c=(arr[i][0]+arr[i][1])>temp-arr[i][0]){counter++;cout<<counter<<endl;return 0;}


}

cout<<a<<endl;
for(int i=0;i<n;i++){int temp=a;
    d+=(arr[i][0]+arr[i][1]);temp-arr[i][0];counter2++;
    if(d>temp) cout<<counter2<<endl;return 0;
}
//cout<<d<<" "<<a<<endl;

*/
