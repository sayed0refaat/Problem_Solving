#include bitsstdc++.h
using namespace std;

int main() {

int n;
cinn;
vectorint vec;

int energy=0,dollars=0;


while(n--){
        int i;cini;
       vec.push_back(i);
}
dollars+=vec.front();

for(int i=0;ivec.size();i++){
    if(vec[i]vec[i+1] && energy(abs(vec[i]-vec[i+1]) ) ){
        dollars+=( abs(vec[i]-vec[i+1]) -energy);energy=0;

    }else if(vec[i]vec[i+1] && energy=(abs(vec[i]-vec[i+1]) )){energy-=abs(vec[i]-vec[i+1]);}
    else {energy+=vec[i]-vec[i+1];}
}

coutdollarsendl;

   return 0;
}
