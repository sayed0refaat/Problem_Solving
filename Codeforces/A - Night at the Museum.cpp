#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
string word;
cin>>word;
int dest=0,moves=0, counter=0,start=0;
int len=word.length();
for(int i=0; i<len; i++){
    dest=word[i]-97;//dest=12,0,15
    moves=abs(start-dest);//moves=12,12,15
    if(moves<13){counter+=moves;}//counter=12,24,
    else{counter +=26-moves;}//counter=35aresares
    start=dest;//start=12,0
}
cout<<counter<<endl;
}