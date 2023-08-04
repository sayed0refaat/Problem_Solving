#include <iostream>
 
using namespace std;
 
int main()
{
char letter;
int first,second,counter=0;
cin>>first>>second;
for(int i=0;i<first;i++){
    for(int k=0; k<second;k++ ){
        cin>>letter;
        if(letter== 'C'||letter== 'M'||letter== 'Y'){counter++;}
    }
 
}
if(counter>=1){cout<<"#Color"<<endl;}
else
    cout<<"#Black&White"<<endl;
 
 
    return 0;
}