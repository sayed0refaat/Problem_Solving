#include <iostream>

using namespace std;

int main()
{
int alice_card , bob_card;
cin>>alice_card>>bob_card;
//inr arr[13]={1,13,12,11,10,9,8,7,6,5,4,3,2};
if(alice_card==bob_card){
    cout<<"Draw";
}else if(alice_card==1 &&alice_card!=bob_card ){
cout<<"Alice";
}else if (bob_card==1 &&alice_card!=bob_card ){
cout<<"Bob";
}else if(alice_card>bob_card){
cout<<"Alice";
}else{
cout<<"Bob";
}

    return 0;
}