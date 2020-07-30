#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ar[] = {1,10,11,9,100};
    int n = sizeof(ar)/sizeof(ar[0]);

    int key = 11;
    auto it = find(ar,ar+n,key);
    cout<<it-ar<<endl;

    key = 101;
    it = find(ar,ar+n,key);
    if(it-ar == n){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<it-ar<<endl;
    }
    
}
