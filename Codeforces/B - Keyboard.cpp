
#include<bits/stdc++.h>
using namespace std;

int n,m,x,res=0;
vector <pair<int,int>>position [26], shift;

bool can[26];

int distance(int i,int j,int r ,int c){

return (i-r)*(i-r)+(j-c)*(j-c);
}

bool check(int i,int j){
for(int k=0;k<shift.size();k++){
    int dist=distance(i,j,shift[k].first,shift[k].second);
    if(dist<=x*x){return true;}
}return false;
}



int main()
{

cin>>n>>m>>x;

char key[31][31];



for(int i=0;i<n;i++){
    cin>>key[i];
}



for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(key[i][j]=='S'){shift.push_back(make_pair(i,j));}
        else{
            position[key[i][j]-'a'].push_back(make_pair(i,j));
        }
    }
}



for(int i=0;i<26;i++){
    for(int j=0;j<position[i].size()&&!can[i];j++){
        can[i]=can[i] | check(position[i][j].first,position[i][j].second);
    }
}

char text[1000000];

int q;string s;
cin>>q>>text;

for(int i=0;i<q;i++){
        if(islower(text[i])){
            if(position[text[i]-'a'].empty()){res=-1;break;}
        }else{
        text[i]=tolower(text[i]);
        if(shift.empty()||position[text[i]-'a'].empty()){res=-1;break;}

        if(!can[text[i]-'a']){++res;}
        }

}

cout<<res<<endl;





        return 0;
}
