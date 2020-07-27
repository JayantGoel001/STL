#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ar[] = {1,10,11,9,100};
    int n = sizeof(ar)/sizeof(ar[0]);

    int key = 11;
    bool present = binary_search(ar,ar+n,key);
    if(!present){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found"<<endl;
    }
}
