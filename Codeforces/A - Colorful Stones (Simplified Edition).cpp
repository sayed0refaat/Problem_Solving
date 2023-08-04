#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    string input,instructions;
    cin>>input>>instructions;
    int len,counter=0,point=0,len2;
    len=input.length();
    len2=instructions.length();
    for(int i=0; i<len2; i++){
        if(input[point]==instructions[i]){counter++;point++;}
    }
    cout<<counter+1<<endl;
}