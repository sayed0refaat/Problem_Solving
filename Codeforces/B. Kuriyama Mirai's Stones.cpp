#include<bits/stdc++.h>
using namespace std;



int main()
{

long long n;cin>>n;
    long long arr[n+1],arr_sorted[n+1];

for(long long i=1;i<=n;i++){
    cin>>arr[i];
    arr_sorted[i]=arr[i];

}


sort(arr_sorted+1,arr_sorted+n+1);

for(long long i=1;i<=n;i++){
        arr[0]=0;arr_sorted[0]=0;
arr[i]+=arr[i-1];arr_sorted[i]+=arr_sorted[i-1];

}




long long q ;cin>>q;

while(q--){
    long long num,l,r,sum=0;
    cin>>num>>l>>r;
    if(num==2){
            cout<<arr_sorted[r]-arr_sorted[l-1]<<endl;
    }
    if(num==1){
            cout<<arr[r]-arr[l-1]<<endl;
    }

}



           return 0;
}


///i used accumulate function in the below code but does not work [time limit]

/*
#include<bits/stdc++.h>
using namespace std;



int main()
{

long n;cin>>n;
    long arr[n],arr_sorted[n];

for(int i=0;i<n;i++){
    cin>>arr[i];

}

for(int i=0;i<n;i++){
    arr_sorted[i]=arr[i];

}

sort(arr_sorted,arr_sorted+n);

int q ;cin>>q;

while(q--){
    long long num,l,r,sum=0;
    cin>>num>>l>>r;
    if(num==2){
            cout<<accumulate(arr_sorted+(l-1),arr_sorted+(r),sum)<<endl;
    }
    if(num==1){
            cout<<accumulate(arr+(l-1),arr+(r),sum)<<endl;
    }

}




        return 0;
}

*/
