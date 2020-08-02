#include<iostream>
#include<set>
using namespace std;
int main(){
    int ar[] = {10,20,11,9,8,11,10};
    int n = sizeof(ar)/sizeof(ar[0]);
    set<int> s;
    for(i:ar){
        s.insert(i);
    }
    for(i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(10);
    for(i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    auto it = s.begin();
    s.erase(*it);
    for(i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}
