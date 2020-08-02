#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> m;
    m.insert(make_pair("mango",10));
    m.insert(make_pair("apple",120));
    m.insert(make_pair("banana",110));
    m.insert(make_pair("guava",90));

    pair<string,int> p;
    p.first = "Pineapple";
    p.second = 120;

    m.insert(p);

    m["lichi"] = 335;

    string key = "guava";
    auto it = m.find(key);
    if(it!=m.end()){
        cout<<"Price of "<<key<<" = "<<m[key];
    }
    else{
        cout<<"Not Found";
    }
    cout<<endl;
    m["guava"] = 40;
    if(m.count(key)){
        cout<<"price "<<m[key]<<endl;
    }
    else{
        cout<<"Not Found";
    }

    m[key] +=22;
    if(m.count(key)){
        cout<<"price "<<m[key]<<endl;
    }
    else{
        cout<<"Not Found";
    }

    m.erase(key);
    if(m.count(key)){
        cout<<"price "<<m[key]<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    cout<<endl;
    m["orange"] = 90;
    m["Pile"] = 80;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
    cout<<endl;
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
}
