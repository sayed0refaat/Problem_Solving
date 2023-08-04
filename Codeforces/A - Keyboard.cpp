 #include <iostream>
 
#include <map>
 
using namespace std;
 
map<char,pair<char,char> > ma;
 
int main()
 
{
 
    char a;
 
    string b;
 
    cin>>a>>b;
 
    ma['a']=make_pair(' ','s');
 
    ma['s']=make_pair('a','d');
 
    ma['d']=make_pair('s','f');
 
    ma['f']=make_pair('d','g');
 
    ma['g']=make_pair('f','h');
 
    ma['h']=make_pair('g','j');
 
    ma['j']=make_pair('h','k');
 
    ma['k']=make_pair('j','l');
 
    ma['l']=make_pair('k',';');
 
    ma[';']=make_pair('l','\'');
 
    ma['\'']=make_pair(';',' ');
 
    ma['q']=make_pair(' ','w');
 
    ma['w']=make_pair('q','e');
 
    ma['e']=make_pair('w','r');
 
    ma['r']=make_pair('e','t');
 
    ma['t']=make_pair('r','y');
 
    ma['y']=make_pair('t','u');
 
    ma['u']=make_pair('y','i');
 
    ma['i']=make_pair('u','o');
 
    ma['o']=make_pair('i','p');
 
    ma['p']=make_pair('o','[');
 
    ma['[']=make_pair('p',']');
 
    ma[']']=make_pair('[',' ');
 
    ma['z']=make_pair(' ','x');
 
    ma['x']=make_pair('z','c');
 
    ma['c']=make_pair('x','v');
 
    ma['v']=make_pair('c','b');
 
    ma['b']=make_pair('v','n');
 
    ma['n']=make_pair('b','m');
 
    ma['m']=make_pair('n',',');
 
    ma[',']=make_pair('m','.');
 
    ma['.']=make_pair(',','/');
 
    ma['/']=make_pair('.',' ');
 
    for(int i=0;i<b.size();i++){
 
            if(a=='R')cout<<ma[b[i]].first;
 
                else cout<<ma[b[i]].second;
 
    }
 
    cout<<"\n";
 
    return 0;
 
}