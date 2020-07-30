#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    pair<int,char> p;
    p.first = 10;
    p.second = 'B';

    pair<int,char> p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<int,string> p3 = make_pair(20,"Hello");
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;

    pair<pair<int,int>,string> car= make_pair(make_pair(10,20),"Audi");
    cout<<car.first.first<<endl;
    cout<<car.first.second<<endl;
    cout<<car.second<<endl;
}


