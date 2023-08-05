#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
int num,res=0;
cin>>num;
string arr[num];
for(int i=0; i<num;i++){
    cin>>arr[i];
    if(arr[i]=="Tetrahedron"){res+=4;}
    else if(arr[i]=="Cube"){res+=6;}
    else if(arr[i]=="Octahedron"){res+=8;}
    else if(arr[i]=="Icosahedron"){res+=20;}
    else if(arr[i]=="Dodecahedron"){res+=12;}
}
 
    cout<<res<<endl;
 
    return 0;
}