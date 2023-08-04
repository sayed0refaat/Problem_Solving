#include <iostream>
#include <vector>
using namespace std;
 
int main() {
int n,dima=0,seraj=0;
cin>>n;
vector<int>card(n);
    for (int i = 0; i <n ; ++i) {
        cin>>card[i];
    }
    int x=0,y=n-1;
    for (int j = 0; j <n ; ++j) {
        if (card[x]>card[y]){
            if (j%2==0){
                seraj+=card[x];
            } else
                dima+=card[x];
            x++;
        } else{
            if (j%2==0)
            seraj+=card[y];
            else
                dima+=card[y];
            y--;
    }}
cout<<seraj<<" "<<dima;
}