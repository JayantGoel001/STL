#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int ar[]= {10,20,30,40,60};
    int n = sizeof(ar)/sizeof(ar[0]);
    rotate(ar,ar+2,ar+n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    vector<int> v{10,20,30,40,60};

    cout<<endl;
    rotate(v.begin(),v.begin()+2,v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    next_permutation(v.begin(),v.end());
    for(x:v){
        cout<<x<<" ";
    }
}
