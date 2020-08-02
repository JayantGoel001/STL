#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    multimap<char,string> m;
    m.insert(make_pair('b',"batman"));
    m.insert(make_pair('a',"apple"));
    m.insert(make_pair('b',"boat"));
    m.insert(make_pair('a',"angry"));
    m.insert(make_pair('c',"cat"));
    m.insert(make_pair('d',"dog"));
    m.insert(make_pair('d',"doubts"));
    m.insert(make_pair('e',"elephant"));

    for(auto p:m){
        cout<<p.first<<"-->"<<p.second<<endl;
    }
    auto it = m.begin();
    cout<<endl;
    m.erase(it);
    for(auto p:m){
        cout<<p.first<<"-->"<<p.second<<endl;
    }

    cout<<endl;
    auto it2 = m.lower_bound('b');
    auto it3 = m.upper_bound('d');

    for(auto it4=it2;it4!=it3;it4++){
        cout<<it4->first<<"-->"<<it4->second<<endl;
    }
    cout<<endl;

    cout<<endl;
    m.erase('a');
    for(auto p:m){
        cout<<p.first<<"-->"<<p.second<<endl;
    }


    auto it5 = m.find('c');
    if(f->second=="cat"){
        m.erase(f);
    }
}

