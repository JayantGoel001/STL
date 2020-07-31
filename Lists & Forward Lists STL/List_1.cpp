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
}
