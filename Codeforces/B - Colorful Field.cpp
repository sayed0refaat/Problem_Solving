///change the matrix to 1d array (smart idea)
#include<bits/stdc++.h>
using namespace std;

int main()
{
int row,col,waste,query;
cin>>row>>col>>waste>>query;
vector<int> vec;

while(waste--){
        int x,y;
        cin>>x>>y;
        x--;
        vec.push_back(x*col+y);

}
sort(vec.begin(),vec.end());

while(query--){
        int x,y,flag=0,counter=0;
        cin>>x>>y;
        x--;
        int position=x*col+y;
        for(int i=0;i<vec.size();i++){

               if(vec[i]==position){flag=1;}
               else if(vec[i]<position){counter++;}

        }
position-=counter;
//cout<<flag<<" ";
//cout<<position<<" ";
            if(flag){cout<<"Waste"<<endl;}
            else if(position%3==2){cout<<"Kiwis"<<endl;}
            else if(position%3==0){cout<<"Grapes"<<endl;}
            else if(position%3==1){cout<<"Carrots"<<endl;}
}






        return 0;
}
