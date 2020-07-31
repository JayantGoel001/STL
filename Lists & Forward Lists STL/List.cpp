#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> l1{1,2,3,10,8,5};
    list<string> l2{"apple","mango","guava"};
    l2.push_back("pineapple");

    l2.sort();
    l2.reverse();

    for(s:l2){
        cout<<s<<" ";
    }
    cout<<endl;

    l2.pop_front();
    cout<<l2.front()<<endl;

    l2.push_front("kiwi");
    cout<<l2.front()<<endl;
    l2.pop_back();

    for(s:l2){
        cout<<s<<" ";
    }
    cout<<endl;

    l2.push_back("orange");
    l2.push_back("lemon");
    l2.push_back("guava");

    for(s:l2){
        cout<<s<<" ";
    }
    cout<<endl;
    string f = "guava" ;
    l2.remove(f);
    for(s:l2){
        cout<<s<<" ";
    }
    cout<<endl;

    auto it = l2.begin();
    int i=0;
    while(i<3){
        it++;
        i++;
    }
    l2.erase(it);
    for(s:l2){
        cout<<s<<" ";
    }
    cout<<endl;

    it = l2.begin();
    it++;
    l2.insert(it,"fruit juice");

    for(s:l2){
        cout<<s<<" ";
    }
    cout<<endl;
}
